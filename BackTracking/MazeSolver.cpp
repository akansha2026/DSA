#include<bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

// isReachable
bool isReachable(int row, int col, int n, int m, vector<vector<int>> &maze){
    // base case
    if(row == n-1 && col == m-1){
        maze[row][col] = 2;
        return true;
    }

    // try left
    if(col-1 >= 0 && maze[row][col - 1] == 0){
        // Try going left by marking the current cell
        maze[row][col] = 2;

        if(isReachable(row, col-1, n, m, maze)) return true;

        // Backtrack to the original state
        maze[row][col] = 0;
    }

    // try right
    if(col+1  < m && maze[row][col + 1] == 0){
        // Try going right by marking the current cell
        maze[row][col] = 2;

        if(isReachable(row, col+1, n, m, maze)) return true;

        // Backtrack to the original state
        maze[row][col] = 0;
    }

    // try bottom
    if(row + 1 < n && maze[row + 1][col] == 0){
        // Try going left by marking the current cell
        maze[row][col] = 2;

        if(isReachable(row + 1, col, n, m, maze)) return true;

        // Backtrack to the original state
        maze[row][col] = 0;
    }

    // try up
    if(row - 1 >= 0 && maze[row - 1][col] == 0){
        // Try going left by marking the current cell
        maze[row][col] = 2;

        if(isReachable(row - 1, col, n, m, maze)) return true;

        // Backtrack to the original state
        maze[row][col] = 0;
    }

    return false;
}

// numWays
long long numWays(int row, int col, int n, int m, vector<vector<int>> &maze){
    // base case
    if(row == n-1 && col == m-1) return 1;

    long long ans = 0;

    // try left
    if(col-1 >= 0 && maze[row][col - 1] == 0){
        // Try going left by marking the current cell
        maze[row][col] = 2;

        ans += numWays(row, col-1, n, m, maze);

        // Backtrack to the original state
        maze[row][col] = 0;
    }

    // try right
    if(col+1  < m && maze[row][col + 1] == 0){
        // Try going right by marking the current cell
        maze[row][col] = 2;

        ans += numWays(row, col+1, n, m, maze);

        // Backtrack to the original state
        maze[row][col] = 0;
    }

    // try bottom
    if(row + 1 < n && maze[row + 1][col] == 0){
        // Try going left by marking the current cell
        maze[row][col] = 2;

        ans += numWays(row + 1, col, n, m, maze);

        // Backtrack to the original state
        maze[row][col] = 0;
    }

    // try up
    if(row - 1 >= 0 && maze[row - 1][col] == 0){
        // Try going left by marking the current cell
        maze[row][col] = 2;

        ans += numWays(row - 1, col, n, m, maze);

        // Backtrack to the original state
        maze[row][col] = 0;
    }

    return ans;
}

int main(){
    // File I/O
    fileIO();
    int n, m;
    cin >> n >> m;
    vector<vector<int>> maze(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> maze[i][j];
        }
    }
    // bool reachable = isReachable(0, 0, n, m, maze);
    // cout << (reachable ? "YES" : "NO") << endl;

    // // let's print the followed path
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout << maze[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    long long ways = numWays(0, 0, n, m, maze);
    cout << "Number of ways to reach destination (n-1, m-1) = " << ways << endl;
}