#include <bits/stdc++.h>
using namespace std;

void fileIO()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main()
{
    // File I/O
    #ifndef ONLINE_JUDGE
        fileIO();
    #endif
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = {x, i};
    }
    int count = n;
    while (count != 1)
    {
        pair<int, int> front = arr[0];
        int diff = front.first - m;
        arr.erase(arr.begin());
        if (diff > 0)
        {
            arr.push_back({diff, front.second});
        }
        else{
            count--;
        }
    }
    cout<<(arr[0].second+1)<<endl;
}