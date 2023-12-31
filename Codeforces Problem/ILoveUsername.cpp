#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int countMin = 0;
    int countMax = 0;
    int min = arr[0];
    int max = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i]>max){
            countMax ++;
            max = arr[i];
        }
        if(arr[i]<min){
            countMin++;
            min = arr[i];
        }
    }
    cout<<countMax+countMin;
    
}