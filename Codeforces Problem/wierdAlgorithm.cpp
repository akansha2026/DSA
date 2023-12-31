#include<bits/stdc++.h>
using namespace std;

void print(long long n){
    cout<<n<<" ";
    // Base case
    if(n==1){
        return;
    }

    // Induction step
    if(n%2 != 0){
        print(3*n+1);
    }
    else {
        print(n/2);
    }
}

int main(){
    long long n;
    cin>>n;
    print(n);
}