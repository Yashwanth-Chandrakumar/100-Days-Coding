#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a ="";
        string b = "";
        for(string s:word1){
            a+=s;
        }
        for(string s:word2){
            b+=s;
        }
        if(a==b){
            return true;
        }
        return false;
    }
};
