You are an IT company's manager. Based on their performance over the last N working days, you must rate your employee. You are given an array of N integers called workload, where workload[i] represents the number of hours an employee worked on an ith day. The employee must be evaluated using the following criteria:

Rating = the maximum number of consecutive working days when the employee has worked more than 6 hours.
You are given an integer N where N represents the number of working days. You are given an integer array workload where workload[i] represents the number of hours an employee worked on an ith day.

Task

Determine the employee rating.

Example

Assumptions

N = 12
workload = [2, 3, 7, 8, 7, 6, 3, 8, 12, 11, 12, 10]
Approach

Workload with consecutive hours > 6 = [2, 3, 7, 8, 7, 6, 3, 8, 12, 11, 12, 10] =>  Longest Interval =  [8,12,11,12,10]

Therefore return 5.

Function description

Complete the Solve() function provided in the editor below that takes the following arguments and returns the employee rating:

N: Represents the number of working days
workload: where workload[i] represents the number of hours an employee worked on an ith day
Input format

The first line contains an integer N denoting the number of working days.
The second line contains a space-separated integer array workload where workload[i] represents the number of hours an employee worked on an ith day.
Output format

Print the employee rating.

Constraints



Sample Input
7
3 7 8 12 4 9 8
Sample Output
3

Answer:
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
