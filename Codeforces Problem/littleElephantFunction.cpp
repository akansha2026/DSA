#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
void sort(vector<int> &arr, int n){
    if(n == 1) return;
    for(int i=0; i<n; i++){
        sort(arr,n-1);
    }
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
    sort(arr,n);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    
}