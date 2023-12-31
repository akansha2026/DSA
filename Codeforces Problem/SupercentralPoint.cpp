#include <bits/stdc++.h>
using namespace std;

void fileIO()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
bool isRight(vector<vector<int>> &arr, int n, int x, int y)
{
    for (int i = 0; i < n; i++)
    {
        if (x < arr[i][0] && arr[i][1] == y)
        {
            return true;
        }
    }
    return false;
}
bool isDown(vector<vector<int>> &arr, int n, int x, int y)
{
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i][0] && arr[i][1] < y)
        {
            return true;
        }
    }
    return false;
}
bool isLeft(vector<vector<int>> &arr, int n, int x, int y)
{
    for (int i = 0; i < n; i++)
    {
        if (x > arr[i][0] && arr[i][1] == y)
        {
            return true;
        }
    }
    return false;
}
bool isUp(vector<vector<int>> &arr, int n, int x, int y)
{
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i][0] && arr[i][1] > y)
        {
            return true;
        }
    }
    return false;
}

int main()
{
// File I/O
#ifndef ONLINE_JUDGE
    fileIO();
#endif

    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(2));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x = arr[i][0];
        int y = arr[i][1];
        bool checkRight = isRight(arr, n, x , y);
        bool checkLeft = isLeft(arr, n, x , y);
        bool checkUp = isUp(arr, n, x, y );
        bool checkDown = isDown(arr, n, x, y );
        if (checkDown && checkUp && checkRight && checkLeft)
        {
            count++;
        }
    }
    cout << count << endl;
}