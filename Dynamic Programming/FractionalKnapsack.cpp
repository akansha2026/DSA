// This is actually a greedy problem not a DP problem
#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

bool comparator(vector<double> &a, vector<double> &b){
    // true => a .. b
    // false => b .. a
    if(a[2] >= b[2]) return true;
    return false;
}

int maxProfit(vector<int> &weight, vector<int> &value , int capacity){
    int n = value.size();
    vector<vector<double>> item(n, vector<double>(3));
    for(int i=0; i<n; i++){
        item[i][0] = value[i];
        item[i][1] = weight[i];
        item[i][2] = value[i]*1.0/weight[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cout << item[i][j] << " ";
        }
        cout << endl;
    }

    sort(item.begin(), item.end(), comparator);
    cout << endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cout << item[i][j] << " ";
        }
        cout << endl;
    }

    int sum = 0;
    int ans = 0;
    for(int i=0; i<n; i++){
        if(sum + item[i][1] <= capacity){
            sum += item[i][1];
            ans += item[i][0];
        }else{
            int diff = capacity - sum;
            ans += diff*item[i][2];
            break;
        }
    }

    return ans;
}

int main(){
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif

    int n;
    cin >> n;
    int capacity;
    cin >> capacity;
    vector<int> weight(n), value(n);
    for(int i=0; i<n; i++) cin >> weight[i];
    for(int i=0; i<n; i++) cin >> value[i];
    cout << maxProfit(weight, value , capacity) << endl;
}