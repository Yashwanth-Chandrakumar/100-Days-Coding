int perfectHits = 0;
    int pseudoHits = 0;

    // Check for perfect hits
    for (int i = 0; i < original.length(); ++i) {
        if (original[i] == guess[i]) {
            ++perfectHits;
        }
    }

    // Count occurrences of each color in both strings
    int originalCount[26] = {0};
    int guessCount[26] = {0};

    for (char c : original) {
        ++originalCount[c - 'A'];
    }

    for (char c : guess) {
        ++guessCount[c - 'A'];
    }

    // Check for pseudo hits
    for (int i = 0; i < 26; ++i) {
        pseudoHits += min(originalCount[i], guessCount[i]);
    }

    // Calculate total score
    return perfectHits + pseudoHits;
