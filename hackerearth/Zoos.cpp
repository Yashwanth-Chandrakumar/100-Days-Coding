For example, words such as zzoooo and zzzoooooo are similar to word zoo but not the words such as zzooo and zzzooooo.

Input format

First line: A word that starts with several Zs and continues by several Os.
Note: The maximum length of this word must be 
.
Output format

Print Yes if the input word can be considered as the string zoo otherwise, print No.

Sample Input
zzzoooooo
Sample Output
Yes

Answers:
#include <iostream>
using namespace std;
int main() {
	string s;
	cin>>s;
	float z=0;
	float o=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='z'){
			z++;
		}
		else if(s[i]=='o'){
			o++;
		}
	}
	if(o/2==z){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}

}
