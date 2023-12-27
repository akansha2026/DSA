#include<bits/stdc++.h>
using namespace std;

void permute(string s, vector<int> &visitedArray,string &curr,int idx,int n){
    // Base case
    if(idx == n) {
        cout<<curr<<endl;
        return;
    }

    for(int i=0; i<n; i++){
        if(visitedArray[i] == 0){
            // Take this character
            visitedArray[i] = 1;
            curr[idx] = s[i];

            permute(s,visitedArray,curr,idx+1,n);

            // Backtracking
            visitedArray[i] = 0;
            curr[idx] = '#';
        }

    }
}

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> visitedArray(n , 0);
    string curr;
    for(int i=0; i<n; i++){
        curr.push_back('#');
    }
    permute(s,visitedArray,curr,0,n);
}