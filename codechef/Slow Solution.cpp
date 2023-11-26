#include <iostream>
using namespace std;
void solution(){
    int max_t,max_n,sum_n;
    cin>>max_t>>max_n>>sum_n;
    int T = sum_n/max_n;
    int r = sum_n%max_n;
    if(T < max_t)
    cout<< T*max_n*max_n + r*r <<endl;
    else
    cout<<max_t*max_n*max_n<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solution();
	}
	return 0;
}
