#include <bits/stdc++.h>
using namespace std;

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

// This returns the updated size
void uniqueElements(vector<int> &arr, int n){
    // sort first to use two pointer approach
    // O(NLogN)
    sort(arr.begin(), arr.end());
    int left = 0, right = 1;
    while(right < n){
        if(arr[left] != arr[right]){
            left++;
            swap(arr[left], arr[right]);
        }
        right++;
    }
    arr.resize(left + 1);
}

// If order have to be maintained
vector<int> uniqueElements(vector<int> &arr){
    int n = arr.size();
    unordered_set<int> s;
    vector<int> ans;
    // O(N)
    for(int i=0; i<n; i++){
        if(s.find(arr[i]) != s.end()) continue;
        s.insert(arr[i]);
        ans.push_back(arr[i]);
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
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    // uniqueElements(arr, n);
    // int m = arr.size();
    // for(int i=0; i<m; i++) cout << arr[i] << " ";
    // cout << endl;

    vector<int> ans = uniqueElements(arr);
    int m = ans.size();
    for(int i=0; i<m; i++) cout << ans[i] << " ";
    cout << endl;
    
}