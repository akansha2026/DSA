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
        string s;
        cin >> s;
        vector<int> arr;
        for(int i=0; i<n; i++){
            if(s[i] == '+'){
                arr.push_back(1);
            }
            else{
                arr.push_back(-1);
            }
        }

    }
}