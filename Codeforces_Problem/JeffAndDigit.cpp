#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    int n;
    cin >> n;
    vector <int> arr(n);
    int count5 = 0;
    int count0 = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] == 5){
            count5 ++;
        }
        else {
            count0++;
        }
    }
    if(count0 == 0){
        cout << "-1" << endl;
    }
    else{
    int x = count5/9;
    if(x==0){
        cout << "0" <<endl;
    }
    else{
    for(int i=1; i<=x*9; i++){
        cout << "5" ;
    }
    int m = count0;
    for(int i=1; i<=m; i++){
        cout << "0";
    }
    cout << endl;
        }
    }

}