#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
void printVector(vector<int> arr, int n){
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
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << arr.capacity() << endl;
    arr.push_back(11);
    cout << arr.capacity() << endl;
    printVector(arr,n);
    int size = arr.size();
    cout << size << endl;

    arr.push_back(12);
    printVector(arr,n+1);

    arr.pop_back();
    printVector(arr,arr.size());
    
    bool check = arr.empty();
    if(check){
        cout << "Array is empty !" << endl;
    }
    else {
        cout << "Array is not empty !" << endl;
    }
    vector<int> :: iterator it;
    it = arr.begin();
    cout << *it <<endl;

    vector<int> :: iterator itr;
    itr = arr.end();
    itr--;
    cout << *itr << endl;

    arr.erase(arr.begin()+2);
    printVector(arr,n-1);

    size = arr.size();
    cout << size << endl;


}