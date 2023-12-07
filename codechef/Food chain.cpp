#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	while(n--){
	    int a,b;
	    cin>>a>>b;
	    int count=0;
	    while(a>0){
	        a/=b;
	        count++;
	    }
	    cout<<count<<endl;
	}
}
