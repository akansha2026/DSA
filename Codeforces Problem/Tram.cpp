#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int capacity = 0;
    int max = -1;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        int b;
        cin>>b;
        capacity = capacity - a;
        capacity = capacity + b;
        if(capacity>max){
            max = capacity;
        }
    }
    cout<<max;
    
}