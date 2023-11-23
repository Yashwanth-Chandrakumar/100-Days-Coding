#include <iostream>
#define ll long long 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        int arr[100000];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0) flag=1;
        }
        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
return 0;
}
