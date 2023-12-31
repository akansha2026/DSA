#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

// Recursive approach
bool terenarySearch(vector<int> &arr,int left, int right,int num){
    int n= arr.size();
    // Base case
    if(left > right) return false;

    int diff = right - left;
    int mid1 = left + diff/3;
    int mid2 = n - diff/3;

    if(arr[mid1] == num) return true;
    if(arr[mid2] == num) return true;

    if(num <arr[mid1]){
        return (arr,left,mid1-1,num);
    }else if(num > arr[mid2]){
        return (arr,mid2+1,right,num);
    }
    else{
        return (arr,mid1+1,mid2-1,num);
    }

}

// Using Loop
bool terenary_search(vector<int> &arr,int left, int right,int num){
    int n = arr.size();
    while(left<=right){
        int diff = right - left;
        int mid1 = left + diff/3;
        int mid2 = n - diff/3;
        if(arr[mid1] == num) return true;
        if(arr[mid2] == num) return true;
        if(num <arr[mid1]){
            right = mid1-1;
        }else if(num > arr[mid2]){
            left = mid2+1;
        }
        else{
            left = mid1+1;
            right = mid2-1;
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

    cout << terenary_search(arr,0,8,10) << endl;
}