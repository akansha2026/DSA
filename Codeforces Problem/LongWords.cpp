#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> str(n);
    for(int i=0; i<n; i++){
        cin >> str[i];
        int m = str[i].length();
        if(m > 10) {
            cout << str[i][0] << m - 2 << str[i][m-1] << endl;
        }else{
            cout << str[i] << endl;
        }
    }
}