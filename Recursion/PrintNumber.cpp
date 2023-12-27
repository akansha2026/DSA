#include<bits/stdc++.h>
using namespace std;

void printTillN(int n){
    if(n<=0) return;
    printTillN(n-1);
    cout<<n<<" ";
}

void printFromN(int n){
    if(n<=0) return ;
    cout<<n<<" ";
    printFromN(n-1);
}

int main(){
    int n;
    cin>>n;
    printTillN(n);
    cout<<endl;
    printFromN(n);

}