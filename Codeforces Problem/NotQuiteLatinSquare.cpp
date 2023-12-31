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
    int t;
    cin >> t;
    while(t--){
        vector<vector<char>> arr(3, vector<char>(3));
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin >> arr[i][j];
            }
        }

        int r, c;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(arr[i][j] == '?'){
                    r = i;
                    c = j;
                }
            }
        }

        map<char, int> m;
        m['A'] = 0;
        m['B'] = 0;
        m['C'] = 0;
        for(int i=0; i<3; i++){
            m[arr[r][i]]++;
        }

        for(int i=0; i<3; i++){
            m[arr[i][c]]++;
        }

        if(m['A'] == 0) cout << 'A' << endl;
        if(m['B'] == 0) cout << 'B' << endl;
        if(m['C'] == 0) cout << 'C' << endl;

    }
    
}