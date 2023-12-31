#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

double f(double x ,double a,double b,double c){
    return a*(x*x) + b*x + c;
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    double a;
    cin >> a;
    double b ;
    cin >> b;
    double c;
    cin >> c;
    double valueOfx = -b/(2*a);
    double ans = f(valueOfx,a,b,c);
    cout << ans <<endl;
    

}