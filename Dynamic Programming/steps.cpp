#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int numWays(int idx, int n, vector<bool> &steps, vector<int> &dp){ // 1 => good, 0 => bad
    // base case
    if(idx == n - 1) return 1;

    // Check
    if(dp[idx] != -1) return dp[idx];

    // Hypothesis: choices, 1 or 2 steps above
    int next = 0;
    int doubleNext = 0;

    if(idx + 1 < n && steps[idx + 1] == 1) next = numWays(step + 1, n, steps)
    if(idx + 2 < n && steps[idx + 2] == 1) doubleNext = numWays(step + 2, n, steps);

    // save
    return dp[idx] = next + doubleNext;
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    
}