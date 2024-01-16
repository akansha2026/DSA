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

    int n, m;
    cin >> n >> m;
    vector<int> seats(m);
    for(int i=0; i<m; i++){
        cin >> seats[i];
    }
    int minTotal = 0, maxTotal = 0;
    
}