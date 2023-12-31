#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int maxProfitByrecursion(vector<int> &weight, vector<int> &value, int idx, int capacity){
    int n = value.size();
    // Base case
    if(idx == n) return 0;
    if(capacity == 0) return 0;

    // Hypothesis case
    if(weight[idx] > capacity) return maxProfitByrecursion(weight, value, idx + 1, capacity);
    else{
        int chosen = maxProfitByrecursion(weight, value, idx, capacity - weight[idx]) + value[idx];
        int notChosen = maxProfitByrecursion(weight, value, idx + 1,capacity);
        return max(chosen, notChosen);
    }
}

int maxProfitByDp(vector<int> &weight, vector<int> &value, int idx, int capacity, vector<vector<int>> &dp){
    int n = value.size();
    // Base case
    if(idx == n) return 0;
    if(capacity == 0) return 0;

    if(dp[idx][capacity] != -1) return dp[idx][capacity];

    // Hypothesis case
    if(weight[idx] > capacity) return dp[idx][capacity] = maxProfitByDp(weight, value, idx + 1, capacity,dp);
    else{
        int chosen = maxProfitByDp(weight, value, idx, capacity - weight[idx],dp) + value[idx];
        int notChosen = maxProfitByDp(weight, value, idx + 1,capacity, dp);
        return dp[idx][capacity] = max(chosen, notChosen);
    }
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    int n, capacity;
    cin >> n >> capacity;
    vector<int> weight(n),value(n);
    for( auto &x :  weight) cin >> x;
    for( auto &x :  value) cin >> x;
    int profit = maxProfitByrecursion(weight, value, 0, capacity);
    cout << profit << endl;
    vector<vector<int>> dp(n+1,vector<int>(capacity+1,-1));
    int profitByDp = maxProfitByDp(weight, value, 0, capacity, dp);
    cout << profitByDp << endl;
}