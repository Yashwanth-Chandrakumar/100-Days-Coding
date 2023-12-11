#include <bits/stdc++.h> 
int shakeHands(vector<int> &friends ,int n, int k)
{
    for(int i=0;i<n;i++){
        if(friends[i]==k){
            k*=2;
        }
    }
    return k;
}
