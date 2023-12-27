#include<bits/stdc++.h>
using namespace std;

string binary(int n , char start){
    // Base case
    if(n==0) return "";

    // Induction step
    if(start=='0'){
        string ans = binary(n-1,'1');
        return '0' + ans;
    }
    else {
        string ans = binary(n-1,'0');
        return '1' + ans;
    }

}

int main(){
    int n;
    cin>>n;
    char startingCharacter;
    cin>>startingCharacter;
    string s = binary(n,startingCharacter);
    cout<<s;
}