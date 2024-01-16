#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int numWays(int n, map<int,int> &m){
    // Base case
    if(n==1) return 1;

    // Hypothesis step
    
    int division2 = 0;
    if(n%2 == 0){
        division2 = numWays(n/2,m);
    }
    int division3 = 0;
    if(n%3 == 0){
        division3 = numWays(n/3,m);
    }
    int minus1 = numWays(n-1,m);
    int ans = division2 + division3 + minus1;
    return ans;
    

}

int minStep(int n, map<int,int> &m){
    // Base case
    if(n==1) return 0;

    // Hypothesis step
    
    int division2 = INT_MAX;
    if(n%2 == 0){
        division2 = minStep(n/2,m);
    }
    int division3 = INT_MAX;
    if(n%3 == 0){
        division3 = minStep(n/3,m);
    }
    int minus1 = minStep(n-1,m);
    
    return 1 + min({minus1,division2, division3});
    
}

int main(){
    // File I/O 
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    int n;
    cin >> n;
    map<int,int> m;
    int ans = numWays(n, m);
    cout << ans << endl;
}