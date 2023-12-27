#include <bits/stdc++.h>
using namespace std;

int missing1(vector<int> &arr , int n){
    sort(arr.begin(), arr.end());
    int missingNumber;
    bool check = false;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] != i)
        {
            check = true;
            missingNumber = i;
            break;
        }
    }

    if(!check){
        missingNumber = n;
    }

    return missingNumber;
}
int missing2(vector<int> &arr , int n){
    int ans = 0;
    for(int i=0; i<n-1; i++){
        ans = ans^arr[i];
    }
    for(int i=1; i<=n; i++){
        ans = ans^i;
    }
    return ans;
}

int missing3(vector<int> &arr,int n){
    set<int> s;
    for(int x : arr){
        s.insert(x);
    }
    for(int i=1; i<=n; i++){
        if(s.count(i)==0){
            return i;
        }
    }
}

int missing4(vector<int> &arr,int n){
    vector<int> visitedArray(n+1, 0);
    for(int i=0; i<n-1; i++){
        visitedArray[arr[i]] = 1;
    }
    for(int i=1; i<=n; i++){
        if(!visitedArray[i]){
            return i;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    // cout<<missing1(arr,n)<<endl;
    // cout<<missing2(arr,n);
    cout<<missing3(arr,n)<<endl;
    cout<<missing4(arr,n);
}