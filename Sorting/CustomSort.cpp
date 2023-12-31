#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

bool comparisonFunction(int a, int b){
    // true => a will come first in array than b
    // false => a will come after b
    if(a <= b) return false;
    return true;
}

bool stringComparsion(string &a, string &b){
    // true => a .. b
    // false => b .. a
    if(a.length() <= b.length()) return true;
    return false;
}

bool matrixComparison(vector<int> &a, vector<int> &b){
    // true => a .. b
    // false => b .. a
    if(a[2] < b[2]) return true;
    if(a[2] == b[2]){
        if(a[3] < b[3]) return true;
        return false;
    }
    return false;
}

bool parityComparsion(int a, int b){
    if(a%2 == 0){
        if(b%2 == 0){
            if(a <= b) return true;
            return false;
        }
        return true;
    }
    else{
        if(b%2 == 1){
            if(a <= b) return true;
            return false;
        }
        return false;
    }
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    // inbuilt sort: O(NlogN)
    sort(arr.begin(), arr.end(), comparisonFunction);
    for(auto &x: arr) cout << x << " ";
    cout << endl;

    int m;
    cin >>m;
    vector<string> str(m);
    for(auto &s: str) cin >> s;

    sort(str.begin(), str.end(), stringComparsion);
    for(auto &s: str) cout << s << " ";
    cout << endl;

    int x, y;
    cin >> x >> y;
    vector<vector<int>> mat(x, vector<int>(y));
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cin >> mat[i][j];
        }
    }

    sort(mat.begin(), mat.end(), matrixComparison);

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    int s;
    cin >> s;
    vector<int> ele(s);
    for(int &x: ele) cin >> x;
    sort(ele.begin(), ele.end(), parityComparsion);
    for(int &x: ele) cout << x << " ";
    cout << endl;
}