#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    set<char> str;
    int n = s.length();
    for(int i=0; i<n;i++){
        str.insert(s[i]);
    }
    int m = str.size();
    if(m%2 != 0){
        cout<<"IGNORE HIM!";
    }
    else {
        cout<<"CHAT WITH HER!";
    }

    
}