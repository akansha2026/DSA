#include<bits/stdc++.h>
using namespace std;

int lowerCasesLength(string s){
    int length = s.length();
    int count = 0;
    for(int i=0; i<length; i++){
        if(s[i]>='a' && s[i]<='z') count++;
    }
    return count;
}

int upperCasesLength(string s){
    int length = s.length();
    int count = 0;
    for(int i=0; i<length; i++){
        if(s[i]>='A' && s[i]<='Z') count++;
    }
    return count;
}

void convertToUpperCase(string &s){
    int  length = s.length();
    for(int i = 0; i<length; i++){
        if(s[i]>='a' && s[i]<='z') s[i] = s[i] - 32;
    }
}
void convertToLowerCase(string &s){
    int  length = s.length();
    for(int i = 0; i<length; i++){
        if(s[i]>='A' && s[i]<='Z') s[i] = s[i] + 32;
    }
}

int main(){
    string s;
    cin>>s;

    int lowerNumber = lowerCasesLength(s);
    int upperNumber = upperCasesLength(s);

    if(lowerNumber<upperNumber){
        convertToUpperCase(s);
    }
    else{
        convertToLowerCase(s);
    }

    cout<<s;
}