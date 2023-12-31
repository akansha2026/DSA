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
        int a, b, c;
        cin >> a >> b >> c;
        map<int, int> m;
        m[a]++;
        m[b]++;
        m[c]++;
        map<int, int>::iterator it = m.begin();
        while(it != m.end()){
            if(it->second == 1){
                cout << it->first << endl;
                break;
            }
            it++;
        }
    }

}