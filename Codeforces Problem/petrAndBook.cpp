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

    int n;
    cin >> n;
    vector<int> arr(7);
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int newN = n % sum;
    int idx = 0;
    if (newN == 0)
    {
        newN = sum;
    }
    sum = 0;
    

    for (int i = 1; i <= 7; i++)
    {
        sum = sum + arr[i - 1];
        if (sum >= newN)
        {
            idx = i;
            break;
        }
    }
    cout << idx << endl;
}