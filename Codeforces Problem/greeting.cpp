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

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int>> arr(n,vector<int>(2));
        for(int i=0; i<n; i++){
            for(int j=0; j<2; j++){
                cin >> arr[i][j];
            }
        }
        int greet = 0;
        for()
    }
}