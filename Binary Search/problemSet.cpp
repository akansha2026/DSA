#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int lower_bound(vector<int> &arr, int l, int r, int x){
    int n = arr.size();
    int ans = n;
    while(l<=r){
        int mid = (l + r)/2;
        if(arr[mid] >= x){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    return ans;
}

int upper_bound(vector<int> &arr, int l, int r, int x){
    int n = arr.size();
    int ans = n;
    while(l<=r){
        int mid = (l + r)/2;
        if(arr[mid] > x){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
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
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int lowerIdx = lower_bound(arr,0,n-1,x);
    int upperIdx = upper_bound(arr,0,n-1,x);
    int ans = upperIdx - lowerIdx;
    cout << ans <<endl;

}