#include<bits/stdc++.h>
using namespace std;

int solve (int N, vector<int> workload) {
   vector<int>ans;
   vector<int>cur;
   for(int i=0;i<N;i++){
    if(workload[i]>6){
        cur.push_back(workload[i]);
    }
    else{
        if(cur.size()>ans.size()){
            ans=cur;
        }
        cur.clear();
    }
   }
   if(cur.size()>ans.size()){
    ans = cur;
   }
   return ans.size();
   
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> workload(N);
    for(int i_workload = 0; i_workload < N; i_workload++)
    {
    	cin >> workload[i_workload];
    }

    int out_;
    out_ = solve(N, workload);
    cout << out_;
}
