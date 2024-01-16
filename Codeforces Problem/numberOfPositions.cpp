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

    int n, a, b;
    cin >> n >> a >> b ;
    int count = 0;
    b = n - b;
    for(int i = 1; i <= n; i++){
        if(i > a && i>= b){
            count++;
        }
    }
    cout << count << endl;
}