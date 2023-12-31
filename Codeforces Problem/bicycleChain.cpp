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
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    int m;
    cin >> m;
    vector<int> b(m);
    for(int i=0; i<m; i++){
        cin >> b[i];
    }

    map<int,int> mp;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if((b[j] % a[i]) == 0){
                int x = b[j]/a[i];
                mp[x]++;
            }
        }
    }
    map<int,int> :: iterator it = mp.begin();
    int ans ;
    int max = INT_MIN;
    while(it != mp.end()){
        if(it ->first > max){
            max = it->first;
            ans = it ->second;
        }
        it++;
    }
    cout << ans << endl;
}