#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
int numWays(int row, int col, int n, int m, vector<vector<int>> &dp){
    // Base case
    if(row == n-1 && col == m-1){
        return 1;
    }
    if(dp[row][col] != -1) return dp[row][col];

    // hypothesis step
    int rightWays = 0;
    if(col != m-1){
        rightWays = numWays(row, col+1, n, m, dp);
    }
    int downWays = 0;
    if(row != n-1){
        downWays = numWays(row+1, col, n, m, dp);
    }
    return dp[row][col] = (rightWays + downWays);
}

int numberOfways(int row, int col, int n, int m,vector<vector<int>> &dp, vector<vector<int>> &arr){
    // Base case
    if(row == n-1 && col == m-1){
        return 1;
    }
    if(dp[row][col] != -1) return dp[row][col];

    // Hypothesis step
    int rightWays = 0;
    int downWays = 0;
    
    if(col != m-1 && arr[row][col+1] == 1){
        rightWays = numberOfways(row, col+1, n, m, dp, arr);
    }
    
    if(row != n-1 && arr[row+1][col] == 1){
        downWays = numberOfways(row+1, col, n, m, dp, arr);
    }
    
    return dp[row][col] = (rightWays + downWays);
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    int n, m;
    cin >> n >> m;
    vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
    int ans = numWays(0,0,n,m,dp);
    cout << "Number of ways is : " << ans << endl;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    vector<vector<int>> DP(n+1,vector<int>(m+1,-1));
    int secondAns = numberOfways(0,0,n,m,DP,arr);
    cout << "Number of ways by takin array in inputs : " << secondAns << endl;


}