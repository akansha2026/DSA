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
    vector<int> money(n);
    for(int i=0; i<n; i++){
        cin >> money[i];
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + money[i];
        money[i] = sum;
    }

    for(int i=0; i<n; i++){
        cout << money[i] << " ";
    }
    cout << endl;

    int q;
    cin >> q;
    while(q--){
        int limit;
        cin >> limit;

        // find the day at which the gullak is full i.e agter this day gullak can't hold any more money
        int left = 0;
        int right = n - 1;
        int mid ;
        int ans = -1;
        while(left <= right){
            mid = (left + right)/2;
            if(money[mid] <= limit){
                    ans = mid;
                    left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        cout << ans + 1 << endl;
    }
}