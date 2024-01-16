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

    int n;
    cin >> n;
    vector<int> beauty(n);
    for(int i=0; i<n; i++){
        cin >> beauty[i];
    }
    int maxDiff = INT_MAX;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int x = abs(beauty[i]-beauty[j]);
            if(x < maxDiff){
                maxDiff = x;
            }
        }
    }
    
}