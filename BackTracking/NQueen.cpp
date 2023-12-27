#include<bits/stdc++.h>
using namespace std;

bool possible(int row, int col, int n, vector<vector<int>> &chess){
    // Column check
    for(int i=0; i<row; i++){
        if(chess[i][col] == 1) return false;
    }

    // Right diagonal check
    int i = row - 1;
    int j = col + 1;
    while(i>=0 && j < n){
        if(chess[i][j] == 1) return false;
        i--;
        j++;
    }

    // left diagonal
    i = row - 1;
    j = col - 1;
    while(i >= 0 && j >= 0){
        if(chess[i][j] == 1) return false;
        i--;
        j--;
    }

    // Finally 
    return true;
}

bool arrangement(int row, int n, vector<vector<int>> &chess){
    // base case
    if(row == n) return true;

    for(int col = 0; col < n; col++){
        // Is it possible to put a queen here at row, col
        if(possible(row, col, n, chess)){
            // Then put a queen here and try afterwards
            chess[row][col] = 1;

            bool check = arrangement(row + 1, n, chess);
            if(check) return true;

            // Backtrack
            chess[row][col] = 0;
        }
    }

    return false;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> chess(n, vector<int>(n, 0)); // 2D matrix
    bool ans = arrangement(0, n, chess);
    if(ans) cout << "Possible" << endl;
    else cout << "Not possible" << endl;

    // Updated chess
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << chess[i][j] << " ";
        }
        cout << endl;
    }
}