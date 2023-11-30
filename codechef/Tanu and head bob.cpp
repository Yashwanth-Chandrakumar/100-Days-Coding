#include <iostream>
using namespace std;

string ans(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]=='I'){
            return "INDIAN";
        }
        else if(s[i]=='Y' ){
            return "NOT INDIAN";
        }
    }
    return "NOT SURE";
}

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a;
	    cin>>a;
	    string s;
	    cin>>s;
	    cout<<ans(s)<<endl;
	}
}
