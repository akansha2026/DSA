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

    int n;
    cin >> n;
    vector<int> ans;
    vector<int> fibonacci;
    int m;
    int a = 0;
    int b = 1;
    fibonacci.push_back(a);
    fibonacci.push_back(b);
    while(b <= 1e9){
        int curr = a + b;
        a = b;
        b = curr;
        fibonacci.push_back(curr);
    }
    m = fibonacci.size();
    for(int i=0; i<m; i++){
        for(int j=i; j<m; j++){
            for(int k=j; k<m; k++){
                if((fibonacci[i] + fibonacci[j] + fibonacci[k]) == n ){
                    ans.push_back(fibonacci[i]);
                    ans.push_back(fibonacci[j]);
                    ans.push_back(fibonacci[k]);
                }
            }
        }
    }
    for(int i=0; i<3; i++){
        cout << ans[i] << " ";
    }
}