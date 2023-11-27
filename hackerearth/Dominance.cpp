#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
       int n,maxcount=0,count=0;
        bool r=false;
        cin>>n;
        int a[n];
         for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            count++;
            if((a[i]!=a[i+1])||(i==n-1))
            {
                if(count>maxcount)
                {
                    maxcount=count;
                    r=true;
                }
                else if(count==maxcount)
                {
                    r=false;
                }
                count=0;
            }
        }
        if(r==true)
        {
            cout<<"\nYES";
        }
        else
        {
            cout<<"\nNO";
        }
    }
    return 0;
