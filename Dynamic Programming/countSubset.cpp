#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

// O(2^N)
int countSubset(int idx, int target, int n, vector<int> &arr){
    // base case
    if(target == 0) return 1;
    if(idx == n) return 0;

    if(arr[idx] <= target){
        int chosen = countSubset(idx+1, target - arr[idx], n, arr);
        int notChosen = countSubset(idx+1, target, n, arr);

        return chosen + notChosen;
    }else{
        int notChosen = countSubset(idx+1, target, n, arr);
        return notChosen;
    }
}

// Memoization: check and save
int countSubset(int idx, int target, int n, vector<int> &arr, vector<vector<int>> &dp){
    // base case
    if(target == 0) return 1;
    if(idx == n) return 0;

    // check
    if(dp[idx][target] != -1) return dp[idx][target];

    if(arr[idx] <= target){
        int chosen = countSubset(idx+1, target - arr[idx], n, arr, dp);
        int notChosen = countSubset(idx+1, target, n, arr, dp);

        return dp[idx][target] = chosen + notChosen;
    }else{
        int notChosen = countSubset(idx+1, target, n, arr, dp);
        return dp[idx][target] = notChosen;
    }
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(auto &x: arr) cin >> x;
    vector<vector<int>> dp(n, vector<int>(target+1, -1));
    int ans = countSubset(0, target, n, arr, dp);
    cout << ans << endl;
}