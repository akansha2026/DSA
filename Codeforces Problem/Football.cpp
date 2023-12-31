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
    vector<string> arr(n);
    map<string,int> m;
    int i = 0;
    while(n--){
        cin >> arr[i];
        m[arr[i]]++;
        i++;
    }

    map<string,int> :: iterator it;
    it = m.begin();
    int currMax = 0;
    string ans ;
    while(it != m.end()){
        if(it->second > currMax){
            currMax = it->second;
            ans = it->first;
        }
        it++;
    }
    cout << ans << endl;

}