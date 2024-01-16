#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int minSteps(int n,int idx, vector<int> &dp){
    // Base case 
    if(idx == n) return 0;

    // Hypothesis step
    if(dp[idx] != -1) return dp[idx];
    int increase1 = minSteps(n, idx+1, dp);

    int twiceTheStep = INT_MAX;
    if(2*idx <= n) twiceTheStep = minSteps(n, 2*idx, dp);
    return  dp[idx] = 1 + min(increase1, twiceTheStep);
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif
    int n;
    cin >> n;
    vector<int> dp(n, -1);
    int ans = minSteps(n, 1, dp);
    cout << ans << endl;
    
}