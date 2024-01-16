#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

bool isExist(int idx, int target, int n, vector<int> &arr, vector<vector<int>> &dp){
    // base case
    if(target == 0) return true;
    if(idx == n) return false;

    // check
    if(dp[idx][target] != -1) return dp[idx][target];

    if(arr[idx] <= target){
        bool chosen = isExist(idx+1, target - arr[idx], n, arr, dp);
        bool notChosen = isExist(idx+1, target, n, arr, dp);
        return dp[idx][target] = chosen || notChosen;   
    }else{
        return dp[idx][target] = isExist(idx+1, target, n, arr, dp);
    }
}

int minDifference(vector<int> &arr){
    int n = arr.size();
    int sum = 0;
    for(auto &x: arr) sum += x;
    vector<vector<int>> dp(n, vector<int>(sum+1, -1));
    int ans = INT_MAX;
    for(int target = 0; target <= sum; target++){
        if(isExist(0, target, n, arr, dp)){
            ans = min(ans, abs(sum - 2*target));
        }
    }
    return ans;

}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &x: arr) cin >> x;

    int ans = minDifference(arr);
    cout << ans << endl;
    
}