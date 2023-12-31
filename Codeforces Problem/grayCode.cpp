#include<bits/stdc++.h>
using namespace std;

vector<string> grayCode(int n){
    // Base case 
    if(n==1){
        return {
            "0",
            "1"
        };
    }

    // Induction step
    vector<string> ans = grayCode(n-1);

    // Hypothesis step
    vector<string> finalAns ;
    int length = ans.size();
    for(int i=0; i<length; i++){
        int m = ans[i].size();
        while(m!=n){
            ans[i] = "0" + ans[i];
            m++;
        }
        finalAns.push_back(ans[i]);
    }
    for(int i=length - 1; i>=0; i--){
        ans[i][0] = '1';
        finalAns.push_back(ans[i]);
    }
    return finalAns;
}

int main(){
    int n;
    cin>>n;
    vector<string> ans = grayCode(n);
    for(int i=0; i<(1<<n); i++){
        cout<<ans[i]<<endl;
    }
}