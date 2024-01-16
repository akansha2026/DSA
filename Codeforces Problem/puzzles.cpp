#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    int n, t;
    cin >> n >> t;
    vector<int> puzzle(t);
    for(int i=0; i<t; i++){
        cin >> puzzle[i];
    }
    
}