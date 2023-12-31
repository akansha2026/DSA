#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int gcd(int a, int b){
    // cout << "(" << a << ", " << b << ")" << endl;
    if(a == 0) return b;
    if(b%a == 0) return a;
    return gcd(b%a, a);
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    int a , b;
    cin >> a >> b;
    int ans = gcd(a,b);
    cout << "HCF of a and b: " << ans << endl;
    int lcm = (a*1LL*b)/ans;
    cout << "LCM of a and b: " << lcm << endl;
}