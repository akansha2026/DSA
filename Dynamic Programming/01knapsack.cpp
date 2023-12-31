#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

// O(2^N) => repititive calls
int maxProfit(vector<int> &weight , vector<int> &value , int capacity,int idx){
    // Base case 
    int n = value.size();
    if(idx == n) return 0;
    if(capacity == 0) return 0;

    // Hypothesis step
    if(weight[idx] > capacity) return maxProfit(weight, value, capacity, idx + 1);
    else {
        int chosen = maxProfit(weight, value, capacity - weight[idx], idx + 1) + value[idx];
        int notChosen = maxProfit(weight, value, capacity, idx + 1);

        return max(chosen, notChosen);
    }
}

// O(N*capacity)
int maxProfitDP(vector<int> &weight , vector<int> &value , int capacity, int idx, vector<vector<int>> &dp){
    // Base case 
    int n = value.size();
    if(idx == n) return 0;
    if(capacity == 0) return 0;

    // check
    if(dp[capacity][idx] != -1) return dp[capacity][idx];

    // Hypothesis step
    if(weight[idx] > capacity) return dp[capacity][idx] = maxProfit(weight, value, capacity, idx + 1);
    else {
        int chosen = maxProfit(weight, value, capacity - weight[idx], idx + 1) + value[idx];
        int notChosen = maxProfit(weight, value, capacity, idx + 1);

        return dp[capacity][idx] = max(chosen, notChosen);
    }
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    int n;
    cin >> n;
    int capacity;
    cin >> capacity;
    vector<int> weight(n), value(n);
    for(auto &x : weight) cin >> x;
    for(auto &x : value) cin >> x;

    int profit = maxProfit(weight, value, capacity, 0);
    cout << profit << endl;

    vector<vector<int>> dp(capacity + 1, vector<int>(n+1, -1));
    int ans = maxProfitDP(weight, value, capacity, 0, dp);
    cout << ans << endl;
}