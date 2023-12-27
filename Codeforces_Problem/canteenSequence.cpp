#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin>>n>>t;

    string children;
    cin>>children;

    for(int i=0; i<t; i++){
        for(int j=0; j<n; j++){
            if(children[j]=='B'){
                if( j+1<n && children[j+1]=='G'){
                    swap(children[j],children[j+1]);
                    j++;
                }
            }
        }
    }

    cout<<children;

}