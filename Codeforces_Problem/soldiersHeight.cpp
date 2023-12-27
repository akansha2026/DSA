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

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int soldier1;
    int soldier2;
    int minDiff = INT_MAX;
    for(int i=0; i<n; i++){
        int curr = i;
        int next = (i + 1)%n;
        if(abs(arr[curr] - arr[next]) < minDiff){
            minDiff = abs(arr[curr] - arr[next]);
            soldier1 = curr + 1;
            soldier2 = next + 1;
        }
    }
    cout << soldier1 <<" "<< soldier2 <<endl;
    
}