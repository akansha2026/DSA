#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

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
        return dp[idx][target] = countSubset(idx+1, target, n, arr, dp);
    }
}

int subsetDiff(vector<int> &arr, int k){
    int n = arr.size();
    int sum = 0;
    for(int &x: arr) sum += x;
    if((sum + k)% 2 == 1) return 0;

    int target = (sum + k)/2;
    vector<vector<int>> dp(n, vector<int>(target+1, -1));
    return countSubset(0, target, n, arr, dp);
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(auto &x: arr) cin >> x;
    int ans = subsetDiff(arr, k);
    cout << ans << endl;
    
}