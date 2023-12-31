#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(3));
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<3; j++){
            if(arr[i][j] == 1){
                count++;
            }
        }
        if(count>(3-count)){
            ans++;
        }
    }
    cout<<ans;
}