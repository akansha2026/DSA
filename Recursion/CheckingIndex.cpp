#include<bits/stdc++.h>
using namespace std;

int firstIndexCheck(vector<int>&arr,int size , int number){
    // Base case
    if(size==0) return -1;

    // Induction step
    int idx = firstIndexCheck(arr,size-1,number);

    // Hypothesis step
    if(idx!=-1) return idx;
    if(arr[size-1]==number) return size-1;
    return -1;

}

int lastIndexCheck(vector<int>&arr,int size , int number){
    // Base case
    if(size==0) return -1;

    // Induction step
    int idx = lastIndexCheck(arr,size-1,number);

    // Hypothesis step
    if(arr[size-1]==number) return size-1;
    return idx;

}

int count(vector<int> &arr, int size, int number){
    // base case
    if(size==0) return 0;

    // Induction step
    int ans = count(arr,size-1,number);

    // Hypothesis step
    if(arr[size-1]==number) return ans+1;
    return ans;
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

    int firstIndex = firstIndexCheck(arr,n,number);
    cout<<firstIndex<<endl;

    int lastIndex = lastIndexCheck(arr,n,number);
    cout<<lastIndex<<endl;

    int numberCount = count(arr,n,number);
    cout<<numberCount;

}