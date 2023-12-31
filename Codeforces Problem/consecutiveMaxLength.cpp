#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.length();
    int curr = 1;
    int maxLength = 1;
    int lastIndex = 1;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]){
            curr++;
        }
        else {
            if(curr>maxLength){
                maxLength = curr;
                lastIndex = i;
            }
            curr = 1;
        }
    }
    if(curr>maxLength){
        maxLength = curr;
        lastIndex = n;
    }
    // int startingIndex = lastIndex - maxLength;
    // string subString = s.substr(startingIndex,maxLength);
    cout<<maxLength;
}