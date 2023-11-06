#include <iostream>
using namespace std;

int main() {
	int t,n,k,a;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    int count =0,flag=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a;
	        if(count+a>=k)
	        count+=a-k;
	        else if(flag==0)
	        flag=i+1;
	    }
	    if(flag>0)
	    cout<<"NO "<<flag<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}
