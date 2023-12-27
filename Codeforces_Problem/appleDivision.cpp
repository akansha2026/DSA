#include<bits/stdc++.h>
using namespace std;

void appleDivision(vector<int> &arr, int n, long long curr, long long &ans, long long total){
    // base case
    if(n == 0){
        long long diff = abs(total - 2*curr);
        if(diff < ans) ans = diff;
        return;
    }

    // Induction step
    // Not chose
    appleDivision(arr, n-1, curr, ans, total);

    // Chosen
    appleDivision(arr, n-1, curr + arr[n-1], ans, total);

}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    long long total = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        total += arr[i];
    }
    long long ans = LLONG_MAX;
    appleDivision(arr, n, 0, ans, total);
    cout << ans << endl;
}