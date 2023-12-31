#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

bool isMagical(int idx, int len, vector<int> &num){
    // base cases
    if(idx == len) return true;
    if(num[idx] == 4) return false;
    if(num[idx] != 1) return false;
    
    // Chosing 1
    if(isMagical(idx+1, len, num)) return true;

    // Chosing 14
    if(idx + 1 < len && num[idx + 1] == 4){
        if(isMagical(idx+2, len, num)) return true;
        if(idx + 2 < len && num[idx+2] == 4){
            if(isMagical(idx+3, len, num)) return true;
        }
    }

    // for lopps => len

    return false;
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    int n;
    cin >> n;
    // 1 14 144
    // 14414
    vector<int> num;
    while(n > 0){
        int dig = n%10;
        num.push_back(dig);
        n /= 10;
    }

    reverse(num.begin(), num.end());
    // for(auto &x: num) cout << x << " ";
    // cout << endl;
    
    int len = num.size();
    bool ans = isMagical(0, len, num);
    if(ans) cout << "YES\n";
    else cout << "NO\n";
}