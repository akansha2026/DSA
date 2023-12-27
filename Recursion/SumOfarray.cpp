#include<bits/stdc++.h>
using namespace std;

int sum(vector<int> &arr, int n){
    if(n==0) return 0;
    int ans = sum(arr,n-1);
    return ans + arr[n-1];
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans = sum(arr,n);
    cout<<ans;
    
}