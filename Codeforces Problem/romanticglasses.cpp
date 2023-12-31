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

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<long long, int> m;
        m[0] = 0;
        long long pre = 0;
        bool flag = false;
        for(int i=1; i<=n; i++){
            long long x;
            cin >> x;
            if(i%2 == 1) pre += x;
            else pre -= x;

            if(m.find(pre) != m.end()){
                flag = true;
            }
            else m[pre] = i;
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}