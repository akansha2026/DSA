#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

// O(2^N)
int fib(int n){
    // base case
    if(n <= 1) return n;

    // Hypothesis
    int a = fib(n-1);
    int b = fib(n-2);

    // Induction step
    return a + b;
}

// O(N)
long long fibMemoize(int n, vector<long long> &dp){
    // base case
    if(n <= 1) return n;

    // check
    if(dp[n] != -1) return dp[n];

    // Hypothesis
    long long a = fib(n-1);
    long long b = fib(n-2);

    // save
    dp[n] = a + b;

    // Induction step
    return a + b;
}

long long fibIterative(int n){
    vector<long long> dp(n+1);
    // base case
    dp[0] = 0;
    dp[1] = 1;
    // O(N)
    for(int i=2; i<=n; i++) dp[i] = dp[i-1] + dp[i-2];
    return dp[n];
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    int n;
    cin >> n;
    vector<long long> dp(n+1, -1);
    auto startTime = high_resolution_clock::now();
    int ans = fibMemoize(n, dp);
    cout << ans << endl;
    auto endTime = high_resolution_clock::now();
    auto diff = duration_cast<microseconds>(endTime - startTime);
    cout << "Time taken by recursion = " << diff.count() << " microseconds" << endl;
}