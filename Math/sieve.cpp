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
    vector<int> prime(n+1, 1);
    prime[0] = prime[1] = 0;
    for(int i=2; i<=n; i++){
        if(prime[i] == 1){
            for(int j=i*i; j<=n; j+=i){
                prime[j] = 0;
            }
        }
    }
    for(int i=1; i<=n; i++){
        cout << i << ": " << (prime[i] ? "Prime" : "Non Prime") << endl;
    }
    
}