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

    int n , m;
    cin >> n >> m;
    vector<int>a(n);
    int sum = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    while(count<m && a[count] < 0){
        sum += (-a[count]);
        count++;
    }
    cout << sum << endl;

}