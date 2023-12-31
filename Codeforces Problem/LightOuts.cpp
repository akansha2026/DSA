#include<bits/stdc++.h>
using namespace std;

void print(int arr[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}

void toggleMatrix(int lightsMatrix[3][3],int i, int j){
    // self toggle
    lightsMatrix[i][j] = 1 - lightsMatrix[i][j];
    if(j-1>=0){
        lightsMatrix[i][j-1] = 1 - lightsMatrix[i][j-1];
    }
    if(i-1>=0){
        lightsMatrix[i-1][j] = 1 - lightsMatrix[i-1][j];
    }
    if(j+1<=2){
        lightsMatrix[i][j+1] = 1 - lightsMatrix[i][j+1];
    }
    if(i+1<=2){
        lightsMatrix[i+1][j] = 1 - lightsMatrix[i+1][j];
    }

}


int main(){
    int arr[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int changeNumber = arr[i][j]%2;
            arr[i][j] = changeNumber;
        }
    }

    int lightsMatrix[3][3] = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}
    };

    for( int i=0 ; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j] == 1) toggleMatrix(lightsMatrix , i , j);
        }
    }
    print(lightsMatrix);
                      
}