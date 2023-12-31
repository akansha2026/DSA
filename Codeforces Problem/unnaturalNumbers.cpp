#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

bool cons(char ch){
    return ch == 'b' || ch == 'c' || ch == 'd';
}

bool vowel(char ch){
    return ch == 'e' || ch == 'a';
}

bool isPossible(string &s, int idx, int n, vector<int> &dp){
    // base case
    if(idx >= n) return true;
    if(vowel(s[idx])) return dp[idx] = false;

    if(dp[idx] != -1) return dp[idx];

    if(idx + 1 < n && vowel(s[idx+1])){
        bool cv = isPossible(s, idx+2, n, dp);
        if(cv) return dp[idx] = true;
    }

    if(idx+2 < n && cons(s[idx+2])){
        bool cvc = isPossible(s, idx+3, n, dp);
        if(cvc) return dp[idx] = true;
    }

    return dp[idx] = false;
}

int main() {
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
        vector<int> dp(n, -1);
        isPossible(s, 0, n, dp);
        dp[0] = 0;
        for(int i=0; i<n; i++){
            if(dp[i] == 1) cout << '.';
            cout << s[i];
        }
        cout << endl;
    }
}