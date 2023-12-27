#include<bits/stdc++.h>
using namespace std;

void sortingArray(vector<int> &arr , int n){
    // Base case
    if(n==0) return ;

    // Induction step
    sortingArray(arr,n-1);

    // Hypothesis step
    int x = arr[n-1];
    int idx = n-2;
    while(idx!=-1){
        if(arr[idx]>x) arr[idx+1] = arr[idx];
        else break;
        idx--;
    } 
    arr[idx+1] = x; 

}
void printArray(vector<int> &arr,int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The sorted array is : "<<endl;
    sortingArray(arr,n);
    printArray(arr,n);

}