#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

bool isExist(int idx, int target, vector<int> &arr){
    int n = arr.size();
    //  Base case 
    if(target == 0) return true;
    if(idx == n) return false;

    // Hypothesis step
    if(arr[idx] > target) return isExist(idx + 1, target, arr);
    else {
        bool chosen = isExist(idx + 1, target - arr[idx], arr);
        bool notChosen = isExist(idx + 1, target, arr);

        return chosen|| notChosen;
    }
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    int n;
    cin >> n;
    int target;
    cin >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    bool check = isExist(0, target, arr);
    if(check) cout << "YES! exist" << endl;
    else cout << "NOT! exist" << endl;
}