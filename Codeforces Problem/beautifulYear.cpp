#include<bits/stdc++.h>
using namespace std;

bool checkDigits(int num){
    set<int> s;
    while(num>0){
        int digit = num%10;
        num = num/10;
        if(!s.count(digit)) s.insert(digit);
        else return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;

    for(int i=n+1; i<=9999; i++){
        bool check = checkDigits(i);
        if(check){
            cout<<i;
            break;
        }
    }

}