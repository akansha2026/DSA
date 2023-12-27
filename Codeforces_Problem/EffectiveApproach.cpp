#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    vector<int> queries(m);
    for(int i=0; i<m; i++){
        cin>>queries[i];
    }
    map<int ,int> mapping;
    for(int i=0; i<n; i++){
        mapping[arr[i]] = i;
    }
    long long petyaCount = 0;
    long long vasyaCount = 0;
    for(int i=0; i<m; i++){
        petyaCount +=  (n - mapping[queries[i]]) ;
        vasyaCount += (mapping[queries[i]] + 1);
    }
    cout<<vasyaCount<<" "<<petyaCount;

}