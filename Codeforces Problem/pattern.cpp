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
    int m = (2 * n + 1);
    for(int i=0; i<m; i++){
        if(i <= m/2){
            int start = n - i;
            for(int j=0; j<start; j++){
                cout << "  " ;
            }
            int end = (2*i+1);
            for(int k = 0; k<end; k++){
                if(k <= end/2){
                    cout << k << " ";
                }
                else {
                    int x = end - k - 1;
                    cout << x << " ";
                }
            }
            cout << endl;
        }
        else {
            int second = i - n;
            for(int l=0; l<second; l++){
                cout << "  ";
            }
            int last =  ;
            // cout <<  "the vale of last is " << last << endl;
            for(int l=0; l<last; l++){
                if(l <= last/2){
                    cout << l << " ";
                }
                else{
                    int x;
                    cout << x << " ";
                }
            }
            cout << endl;
        }
    }
    
}