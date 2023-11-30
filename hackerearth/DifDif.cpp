#include<bits/stdc++.h> 
using namespace std; 
int main() {     
	string str;     
	cin>>str;     
	set<string> result ;        
for (int i = 0; i <= str.length(); i++)     {         
	for (int j = 1; j <= str.length()-i; j++)         {            
		result.insert(str.substr(i, j));         }     }   
		cout<<result.size(); 
		}
