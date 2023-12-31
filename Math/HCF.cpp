#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

vector<int> factorizationArray(int n){
    vector<int> ans;
    // O(N)
    for(int i=2; i<=n; i++){
        while(n%i == 0){
            ans.push_back(i);
            n /= i;
        }
    }
    return ans;
}

vector<int> intersection(vector<int> &a , vector<int> &b){
    int n = a.size();
    int m = b.size();
    vector<int> ans;
    // O(N)
    int i=0, j=0;
    while(i<n && j<m){
        if(a[i] == b[j]){
            ans.push_back(a[i]);
            i++;
            j++;
        }else if(a[i] < b[j]){
            i++;
        }else{
            j++;
        }
    }
    return ans;
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    int a, b;
    cin >> a >> b;

    vector<int> arr = factorizationArray(a);
    vector<int> brr = factorizationArray(b);

    int n = arr.size();
    int m = brr.size();

    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
    for(int i=0; i<n; i++) cout << brr[i] << " ";
    cout << endl;

    vector<int> ans = intersection(arr,brr);
    int x = ans .size();
    int hcf = 1;
    for(int i=0; i<x; i++){
        cout << ans[i] << " ";
        hcf *= ans[i];
    }
    cout << endl;
    cout << hcf << endl;
}