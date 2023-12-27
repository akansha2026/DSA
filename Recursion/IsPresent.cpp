#include<bits/stdc++.h>
using namespace std;

bool isPresent(vector<int> &arr, int size,int number){
    // Base case
    if(size==0) return false;

    // Induction step
    bool check = isPresent(arr,size-1,number);

    // Hypothesis step
    if(arr[size-1]==number) return true;
    return check;
    
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int number;
    cin>>number;
    bool check =isPresent(arr,n,number);
    cout<<check;
    
}