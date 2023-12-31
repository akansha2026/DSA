#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int digitSum(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

bool digitComparison(int a, int b){
    int digitSumOfA = digitSum(a);
    int digitSumOfB = digitSum(b);

    if(digitSumOfA <= digitSumOfB) return true;
    return false;
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &x:arr) cin >> x;

    sort(arr.begin(),arr.end(),digitComparison);

    for(auto &x : arr) cout << x << " ";
    cout << endl;
}