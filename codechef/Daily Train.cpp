#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,n;
	cin>>x>>n;
	map<int,int> mp;
	mp[0]=1;
	mp[1]=1;
	mp[2]=2;
	mp[3]=6;
	mp[4]=24;
	mp[5]=120;
	mp[6]=720;
	int ans=0;
	while(n--)
	{
	    string s;
	    cin>>s;
	    int cnt=0;
	    for(int i=0,j=53;i<j;i+=4,j-=2)
	    {
	        cnt=0;
	        for(int k=i;k<i+4;k++)
	        {
	            if(s[k]=='0')
	            cnt++;
	        }
	        if(s[j]=='0')
	        cnt++;
	        if(s[j-1]=='0')
	        {
	            cnt++;
	        }
	        if(cnt>=x)
	        {
	            ans+=mp[cnt]/(mp[x]*mp[cnt-x]);
	        }
	    }
	   // cout<<
	}
	cout<<ans;
	return 0;
}
