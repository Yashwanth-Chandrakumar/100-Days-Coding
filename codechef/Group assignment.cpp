#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll int n,b,x,y,p,i,c=0,k,sum=0;
    cin>>n;
    map<ll int,ll int>m;
    for(i=0; i<n; i++)
    {
        cin>>x;
        m[x]++;
    }
    for(auto &i:m)
    {
        if(i.second%i.first!=0)
        {
            c=1;    ///4-->3   3-->1
            break;
        }
    }
    if(c)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
