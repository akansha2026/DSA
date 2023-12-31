#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int size = s.length();
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    string str;
    for(int i=0; i<size; i++){
        if(s[i] == '1'){
            count1++;
        }
        if(s[i] == '2'){
            count2++;
        }
        if(s[i] == '3') {
            count3++;
        }
    }
    while(count1>0){
        str.push_back('1');
        str.push_back('+');
        count1--;
    }
    while(count2>0){
        str.push_back('2');
        str.push_back('+');
        count2--;
    }
    while(count3>0){
        str.push_back('3');
        str.push_back('+');
        count3--;
    }
    str.pop_back();
    cout<<str;
    
}