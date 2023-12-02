class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
int arr[26] = {0};

        for (int i = 0; i < chars.length(); i++) {
            arr[chars[i] - 'a']++;
        }

        int count = 0;

        for (int i = 0; i < words.size(); i++) {
            int brr[26] = {0};
            bool goodString = true;

            for (int j = 0; j < words[i].length(); j++) {
                brr[words[i][j] - 'a']++;
            }

            for (int j = 0; j < 26; j++) {
                if (brr[j] > arr[j]) {
                    goodString = false;
                    break;
                }
            }

            if (goodString) {
                count += words[i].length();
            }
        }

        return count;
    }
};
