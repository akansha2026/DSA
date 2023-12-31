#include<bits/stdc++.h>
using namespace std;

int main (){
    string borzeCode;
    cin>>borzeCode;

    int n = borzeCode.length();

    for(int i=0; i<n;){
        if(borzeCode[i]=='.'){
            cout<<"0";
            i++;
        }

        else {
            if(borzeCode[i+1]=='-') 
            cout<<"2";
            else cout<<"1";
            i+=2;
        }
    }

}