unordered_map<char, int> keyIndex;

    for (int i = 0; i < m; i++) {
        keyIndex[keyboard[i]] = i;
    }

    int time = 0;

    int currentPos = 0;

    for (int i = 0; i < n; i++) {
        char targetChar = s[i];

        int targetPos = keyIndex[targetChar];

        time += abs(targetPos - currentPos);

        currentPos = targetPos;
    }

    return time;
