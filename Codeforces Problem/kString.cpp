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

    int k;
    cin >> k;
    string str;
    cin >> str;
    int n = str.size();
    map<char,int> m;
    for(int i=0; i<n; i++){
        m[str[i]]++;
    }
    map<char,int> :: iterator it = m.begin();
    bool check = true;
    while(it != m.end()){
        if((it->second % k) != 0){
            check = false;
            break;
        }
        it++;
    }
    string s;
    if(check){
        it = m.begin();
        while(it != m.end()){
            int count = it->second/k;
            while(count--){
                s.push_back(it->first);
            }
            it++;
        }
        for(int i=0; i<k; i++){
            cout << s;
        }
        cout << endl;
    }
    else{
        cout << -1 << endl;
    }
}