#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int numWays(int row, int col, int n, int m, vector<vector<int>> &dp){
    // Base case 
    if(row == n-1) return 1;
    
    if(dp[row][col] != -1) return dp[row][col] ;

    // Hypothesis step
    int rightWays = 0;
    int downWays = 0;
    if(row != n-1){
        downWays = numWays(row + 1, col, n, m, dp);
    }
    if(col != m-1){
        rightWays = numWays(row, col+1, n, m, dp);
    }
    return dp[row][col] = downWays + rightWays;

}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    int n, m;
    cin >> n >> m;
    vector<vector<int>> dp(n+1,vector<int> (m+1,-1));
    int ans = numWays(0, 0, n, m, dp);
    cout << "Ans is : " << ans << endl;
}