#include <iostream>
using namespace std;
bool prime(int a){
    if(a<=1){
        return false;
    }
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int main() {
	int n;
	cin>>n;
	while(n--){
	    int a,b;
	    cin>>a>>b;
	    for(int i=a;i<=b;i++){
	        if(prime(i)){
	            cout<<i<<endl;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
