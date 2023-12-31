#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n, vector<int> (2));
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin>>arr[i][j];
        }
    }
    int countCol0 = 0;
    int countCol1 = 0;
    for(int i=0; i<n; i++){
        if(arr[i][0]==0) countCol0++;
        else countCol1++;
    }
    int countColumn0 = 0;
    int countColumn1 = 0;
    for(int i=0; i<n; i++){
        if(arr[i][1]==0) countColumn0++;
        else countColumn1++;
    }
    int finalColumn1 = countCol0 < countCol1 ? countCol0 : countCol1;
    int finalColumn2 = countColumn0 < countColumn1 ? countColumn0 : countColumn1;
    int finalAns = finalColumn1 + finalColumn2;
    cout<<finalAns;


}