#include<bits/stdc++.h>
using namespace std;

int main(){
    string p;
    cin>>p;
    bool check = false;
    int n = p.size();
    for(int i=0; i<n; i++){
        if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9'){
            check = true;
        }
        
    }
    if(check){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    
}