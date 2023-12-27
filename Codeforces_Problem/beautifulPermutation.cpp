#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n;
    if(n==1) cout<<"1";
    else if(n<=3) cout<<"NO SOLUTION";
    else if(n%2 == 0){
        for(int i=1; i<=n/2; i++){
            cout<<n/2 - i + 1 <<" "<< n - i + 1<<" ";
        }
    }
    else {
        for(int i=1; i<=n/2; i++){
            cout<<n-i+1<<" "<<n/2-i +1<<" ";
        }
        cout<<n/2+1;
    }
}