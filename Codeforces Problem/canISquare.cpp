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

    int t ;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long sum = 0;
        vector<int> arr(n);
        int i=0;
        while(n--){
            cin >> arr[i];
            sum = sum + arr[i];
            i++;
        }
        double ans = sqrt(sum);
        if(floor(ans) == ans){
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" <<endl;
        }
    }
}