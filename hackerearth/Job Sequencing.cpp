#include<bits/stdc++.h>
bool sortByProfit(const vector<int>& job1, const vector<int>& job2) {
    return job1[2] > job2[2];
}

vector<int> jobScheduling(vector<vector<int>>& jobs) {
    sort(jobs.begin(), jobs.end(), sortByProfit);

    int maxDeadline = 0;
    for (const vector<int>& job : jobs) {
        maxDeadline = max(maxDeadline, job[1]);
    }

    vector<int> schedule(maxDeadline, -1);

    for (const vector<int>& job : jobs) {
        for (int i = job[1] - 1; i >= 0; --i) {
            if (schedule[i] == -1) {
                schedule[i] = job[2]; 
                break;
            }
        }
    }

    int totalProfit = 0;
    int jobsCompleted = 0;

    for (int profit : schedule) {
        if (profit != -1) {
            totalProfit += profit;
            jobsCompleted++;
        }
    }

    return {jobsCompleted, totalProfit};
}
