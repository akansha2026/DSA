#include <bits/stdc++.h>
using namespace std;

int main()
{
    // File I/O
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        cout << arr[i] + 20 << " ";
    }
}