#include<bits/stdc++.h>
using namespace std;

void printBinary(string curr, int n , int remaining){
    // base case 
    if(n==0){
        cout<<curr<<endl;
        return;
    }
    
    // Induction step
    if(remaining>=0){
        curr.push_back('0');
        printBinary(curr,n-1,remaining-1);

        curr.pop_back();
        curr.push_back('1');
        printBinary(curr,n-1,remaining);
    }
}

int main(){
    int n;
    cin>>n;
    int remaining = n/2;
    string curr;
    printBinary(curr,n,remaining);
}