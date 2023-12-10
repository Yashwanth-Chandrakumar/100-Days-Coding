int makeBeautiful(string str) {int n = str.length();
    std::string str1, str2;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            str1 += '1';
            str2 += '0';
        } else {
            str1 += '0';
            str2 += '1';
        }
    }

    int count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] != str1[i]) {
            count1++;
        }
        if (str[i] != str2[i]) {
            count2++;
        }
    }

    return std::min(count1, count2);}
