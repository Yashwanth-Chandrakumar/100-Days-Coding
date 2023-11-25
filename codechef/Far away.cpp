#include <iostream>
using namespace std;

int main() {
	long t;
	cin>>t;
	while(t--)
	{
	    long long n,m;
	    cin>>n>>m;
	    int a[n];
	   
	    for(long i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    long sum =0;
	    long max =0;

	    for(long i=0;i<n;i++)
	    {
	        if(a[i]>m/2)
	        {
	            max = abs(a[i]-1);
	            
	        }
	        else
	        max = abs(a[i]-m);
	   
	        sum = sum + max;
	       max =0;
	    }
	    cout<<sum<<endl;
	    
	}
	return 0;
}
