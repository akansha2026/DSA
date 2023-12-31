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

    int n, m;
    cin >> n >> m;
    int count = 0;
    for(int a=0; a<=1000; a++){
        for(int b=0; b<=1000; b++){
            if((a*a + b) == n && (a + b*b) == m){
                count++;
            }
        }
    }
    cout << count << endl;
}