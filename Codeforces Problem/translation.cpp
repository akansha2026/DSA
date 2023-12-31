#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void reverse(string s){
    int n = s.size();
    for(int i=0; i<n/2; i++){
        swap(s[i],s[n-1+i]);
    }
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    string s;
    cin >> s;
    string t;
    cin >> t;
    reverse(s.begin(),s.end());
    if(s==t) cout << "YES" << endl;
    else cout << "NO" << endl;
    

}