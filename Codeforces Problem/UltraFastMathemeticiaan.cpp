#include<bits/stdc++.h>
using namespace std;

int main(){
    string n , m;
    cin>>n>>m;
    int length = n.length();
    string newNumber;
    int i=0;
    while(i<length){
        if((n[i]=='0' && m[i] == '0') || (n[i] == '1' && m[i] == '1')){
            newNumber.push_back('0');
        }
        else {
            newNumber.push_back('1');
        }
        i++;
    }
    cout<<newNumber;

}