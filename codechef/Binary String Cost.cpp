#include<algorithm>
#include <iostream>
#include<string>
using namespace std;

int main() {
	int t;
    cin >> t;
    while(t--){
        int n,c1,c2;
        cin >> n;
        cin>>c1;
        cin>>c2;
        string str;
        cin >> str;
        sort(str.begin(),str.end());
        if(str[str.length()-1] == '0' && str[0] == '0'){
            cout << '0' << endl;
        }
        else if(str[str.length()-1] == '1' && str[0] == '1'){
            cout << '0' << endl;
        }
        else{
            if(c1>c2)
            cout << c2<<endl;
            else
            cout << c1<<endl;
        }
    }
	return 0;
}
