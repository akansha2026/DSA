#include<bits/stdc++.h>
using namespace std;

void printSubset(vector<int> &arr,int n,vector<int> &curr){
    // Base case
    if(n==0){
        int s = curr.size();
        for(int i=0; i<s; i++){
            cout<<curr[i]<<" ";
        }
        cout << endl;
        return;
    }

    // Induction step
    curr.push_back(arr[n-1]);
    printSubset(arr,n-1,curr);

    curr.pop_back();
    printSubset(arr,n-1,curr);
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> curr;
    printSubset(arr,n,curr);
}