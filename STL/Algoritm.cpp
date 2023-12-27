#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    reverse(arr,arr+n);
    cout << "Reversed Array is : ";
    printArray(arr,n);

    sort(arr,arr+n);
    cout << "Sorted Array is : ";
    printArray(arr,n);


    bool check = binary_search(arr,arr+n,6);
    if(check){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    
    int* lowerPointer = lower_bound(arr,arr+n,6);
    cout << *lowerPointer <<endl;

    int* upperPointer = upper_bound(arr,arr+n,6);
    cout << *upperPointer << endl;

}