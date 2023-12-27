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
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int min = INT_MAX;
    int countMin = 0;
    int idx = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
            countMin = 1;
            idx = i + 1;
        }
        else if(min == arr[i]){
            countMin++;
        }
    }
    if(countMin == 1){
        cout << idx << endl;
    }
    else {
        cout << "Still Rozdil" << endl;
    }
    
}