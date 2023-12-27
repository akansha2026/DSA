#include<bits/stdc++.h>
using namespace std;

bool possible(int row,int col,int num,vector<vector<int>> &sudoku,int n){
    // Row check
    for(int i=0; i<n; i++){
        if(sudoku[row][i]==num) return false;
    }

    // Column check
    for(int i=0; i<n; i++){
        if(sudoku[i][col]==num) return false;
    }

    // Box check
    int size = sqrt(n);
    int x = (row/size)*size;
    int y = (col/size)*size;
    for(int i=x; i<x+size;i++){
        for(int j=y; j<y+size; j++){
            if(sudoku[i][j]==num) return false;
        }
    }
    return true;
}

bool arrangement(int row, int col ,int n,vector<vector<int>> &sudoku){
    // Base case 
    if(row == n) return true;
    if(sudoku[row][col]!=0){
        if(col+1==n) return arrangement(row+1,0,n,sudoku);
        else return arrangement(row,col+1,n,sudoku);
    }

    // Induction + Hypothesis step
    for(int num=1; num<=n; num++){
        // Check if it possible to put num at row , col
        if(possible(row,col,num,sudoku,n)){
            // Put
            sudoku[row][col] = num;
            
            bool check = false;
            if(col + 1 == n) check = arrangement(row+1,0,n,sudoku);
            else check = arrangement(row,col+1,n,sudoku); 

            if(check == true) return true;

            // backtrack
            sudoku[row][col] = 0;
        }
    }

    return false;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> sudoku(n,vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>sudoku[i][j];
        }
    }

    bool check = arrangement(0,0,n,sudoku);
    if(check) cout<<"Possible"<<endl;
    else cout<<"Not possible"<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<sudoku[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}