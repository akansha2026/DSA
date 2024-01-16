#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
void elephantArray(int n){
    cout << n <<" ";
    for(int i=1; i<n; i++){
        cout << i <<" ";
    }
    cout << endl;
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    int n;
    cin >> n;
    elephantArray(n);

}