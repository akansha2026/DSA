#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int firstFalse(vector<bool> &arr,int left , int right){
    int ans =  0;
    while(left <= right){
        int mid = (right + left)/2;
        if(arr[mid] == false){
            ans = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return ans;
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    int n;
    cin >> n;
    vector<bool> arr(n);

    for(int i=0; i<n; i++){
        bool x;
        cin >> x;
        arr[i] = x;
    }
    int idx = firstFalse(arr,0,n-1);
    cout << idx << endl;
}