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

    long long s, n;
    cin >> s >> n;
    vector<vector<int>> dragon(n,vector<int>(2));
    for(int i=0; i<n; i++){
        cin >> dragon[i][0] ;
        cin >> dragon[i][1] ;
    }
    sort(dragon.begin(),dragon.end());
    int count = 0;
    for(int i=0; i<n; i++){
        if(s <= dragon[i][0]){
            break;
        }
        else {
            s += dragon[i][1];
            count ++;
        }
    }
    if(count == n){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}