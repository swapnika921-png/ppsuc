char* kth_word_in_mth_sentence_of_nth_paragraph(char**** document, int k, int m, int n) {
    return document[n-1][m-1][k-1];
}

char** kth_sentence_in_mth_paragraph(char**** document, int k, int m) {
    return document[m-1][k-1];
}

char*** kth_paragraph(char**** document, int k) {
    return document[k-1];
}

char**** get_document(char* text) 
{
    assert(text!=null);

    char** paragraphs = malloc(MAX_PARAGRAPHS * sizeof(char*));
    int npar = 0;

    char* paragraph = strtok(text, "\n");
    while (paragraph != NULL && npar < MAX_PARAGRAPHS) {
        paragraphs[npar++] = paragraph;
        paragraph = strtok(NULL, "\n");
    }

    char**** document = malloc(npar * sizeof(char*));

    for (int i = 0; i < npar; i++) {
        char** sentences = malloc(MAX_CHARACTERS * sizeof(char*));
        int nsen = 0;
        char* sentence = strtok(paragraphs[i], ".");

        while (sentence != NULL) {
            sentences[nsen++] = sentence;
            sentence = strtok(NULL, ".");
        }

        document[i] = malloc(nsen * sizeof(char**));

        for (int j = 0; j < nsen; j++) {
            char** words = malloc(MAX_CHARACTERS * sizeof(char*));
            int nwords = 0;
            char* word = strtok(sentences[j], " ");

            while (word != NULL) {
                words[nwords++] = word;
                word = strtok(NULL, " ");
            }

            document[i][j] = words;
        }
    }

    return document;
}
