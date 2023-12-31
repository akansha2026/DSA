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

    long long n, k;
    cin >> n >> k;
    long long ans ;
    if(k<=(n+1)/2){
        ans = 2 * k - 1;
    }
    else{
        long long diff = k - (n+1)/2 ;
        ans = 2 * diff;
    }
    cout << ans << endl;
    
    // 1 3 5 7 9 2 4 6 8 10
}