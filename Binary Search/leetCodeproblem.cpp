#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
double mySqrt(int x) {
        double left = 0;
        double right = x;
        double ans = x;
        int numIteration = 0;
        while(left <= right){
            double mid = (right + left)/2;
            double diff = mid*mid - x*1.0;
            if(fabs(diff) <= 0.00000000001){
                ans = mid;
                break;
            }
            else if(diff < 0){
                left = mid;
            }
            else {
                right = mid;
            }
            numIteration++;
        }
        // int finalAns = ans;
        cout << numIteration <<endl;
        return ans;
    }

int squareRoot(int n){
    int left = 0;
    int right = n;
    int ans = 0;
    int numIteration = 0;
    while(left <= right){
        int mid = (right + left)/2;
        if(mid*mid <= n){
            ans = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
        numIteration++;
    }
    cout << numIteration <<endl;
    return ans;
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    int n;
    cin >> n;
    cout << mySqrt(n) << endl;
    cout << squareRoot(n) << endl;
}