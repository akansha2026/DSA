#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int exp(int n, int p){
    int ans = 0;
    while(n > 0){
        ans += n/p;
        n /= p;
    }
    return ans;
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    // This question is about to calculate the exponent of prime p in n!

    int n, p;
    cin >> n >> p;
    
    cout << exp(n, p) << endl;
}