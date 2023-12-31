#include<bits/stdc++.h>
using namespace std;

int main(){
    string p;
    cin>>p;
    string q;
    cin>>q;
    int n = p.size();
    int ans = 0;
    for(int i=0; i<n; i++){
        char chP = p[i];
        if(chP>='A' && chP<='Z') chP+=32;
        char chQ = q[i];
        if(chQ>='A' && chQ<='Z') chQ+=32;
        if(chP>chQ){
            ans = 1;
            break;
        }
        else if(chP<chQ){
            ans = -1;
            break;
        }
    }
    cout<<ans;
    
}