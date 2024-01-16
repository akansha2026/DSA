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

    string s;
    cin >> s;
    int n = s.size();
    int count = 0;
    string str = "hello";
    string newStr;
    for(int i = 0; (i < n) && (count < 5); i++){
        char ch = str[count];
        if(s[i] == ch){
            newStr.push_back(s[i]);
            count ++;
        }
    }
    if(newStr == str){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}