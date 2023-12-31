#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

vector<int> unionArray(vector<int> &a, vector<int> &b){
    int n = a.size();
    int m = b.size();
    vector<int> ans;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0;
    while(i<n && j<m){
        if(a[i] == b[j]){
            ans.push_back(a[i]);
            i++;
            j++;
        }else if(a[i] < b[j]){
            ans.push_back(a[i]);
            i++;
        }else{
            ans.push_back(b[j]);
            j++;
        }
    }

    while(i<n){
        ans.push_back(a[i]);
        i++;
    }

    while(j<m){
        ans.push_back(b[j]);
        j++;
    }
    return ans;
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];

    vector<int> ans = unionArray(a, b);
    for(int x: ans) cout << x << " ";
    cout << endl;
}