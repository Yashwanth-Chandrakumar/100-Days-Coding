#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	       int n,c=0;
	       cin>>n;
	       int a[2*n];
	       for(int i=0;i<2*n;i++)
	       {
	           cin>>a[i];
	       }
	       
	       for(int i=0;i<(2*n)-1;i++)
	       {
	         c=0;
	           for(int j=i;j<2*n;j++)
	           {
	               if(a[i]==a[j])
	
	                   c++;
	                   
	           }
	           if(c==3)
	           {
	               cout<<"NO"<<endl;
	               break;
	           }
	           
	       }
	       if(c<3)
	       cout<<"YES"<<endl;
	       
	}
	
	return 0;
}
