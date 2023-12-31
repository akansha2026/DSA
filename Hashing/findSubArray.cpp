#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int numSubArray(vector<int> &a){
    int n = a.size();
    long long prefixSum = 0;
    map<long long , int> mp;
    mp[0] = 1;
    int ans = 0;
    for(int i=0; i<n; i++){
        prefixSum += a
        [i];
        if(mp.find(prefixSum) != mp.end()){
            ans += mp[prefixSum];
        }
        mp[prefixSum]++;
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
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int ans = numSubArray(arr);
    cout << ans << endl;
}