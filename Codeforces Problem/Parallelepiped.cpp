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

    int x, y, z;
    cin >> x >> y >> z;
    int a, b, c;
    a = sqrt((x*z)/y);
    b = sqrt((x*y)/z);
    c = sqrt((y*z)/x);
    int ans = (4 * a) + (4 * b) + (4 * c);
    cout<<ans;
}