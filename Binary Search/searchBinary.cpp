#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
// Recursive Approach
bool binarySearch(vector<int> &arr,int left, int right, int num){
    // Base case
    if(left>right) return false;
    int mid = (left + right)/2;
    if(arr[mid] == num) return true;
    
    if(arr[mid] < num){
        return binarySearch(arr,mid+1,right,num);
    }
    else {
        return binarySearch(arr,left,mid-1,num);
    }
}

// While loop Approach
bool BinarySearch(vector<int> &arr,int left, int right, int num){
    int mid;
    while(left<=right){
        mid = (left + right)/2;
        if(arr[mid] == num) return true;
        if(arr[mid] < num){
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return false;
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif
    vector<int> arr(9);
    for(int i=0; i<9; i++){
        cin >> arr[i];
    }
    cout << BinarySearch(arr,0,8,6) <<endl;
    vector<int> ::iterator it,itr;
    it = lower_bound(arr.begin(),arr.end(),6);
    itr = upper_bound(arr.begin(),arr.end(),6);
    // cout <<it <<endl;
}