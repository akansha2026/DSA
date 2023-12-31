#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    bool check = true;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            check = false;
            break;
        }
    }
    return check;
}

int main(){
    int n,m;
    cin>>n>>m;
    bool check = true;
    for(int i=n+1; i<m; i++){
        if(isPrime(i)){
            check = false;
            break;
        }
    }

    if(check){
        if(isPrime(m)) cout<<"YES";
        else cout<<"NO";
    }
    else cout<<"NO";   
}