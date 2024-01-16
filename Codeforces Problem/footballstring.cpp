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

    string s;
    cin >> s;
    int n = s.size();
    int count = 0;
    bool check = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '0')
        {
            count++;
        }
        if (s[i] != s[i + 1] && count != 7)
        {
            count = 0;
        }
        if (count == 7)
        {
            check = true;
        }
    }
    if (count == 6)
    {
        count++;
        check = true;
    }
    if (check)
    {
        cout << "YES" << endl;
    }
    else
    {
        count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '1')
            {
                count++;
            }
            if (s[i] != s[i + 1] && count != 7)
            {
                count = 0;
            }
            if (count == 7)
            {
                check = true;
            }
        }
        if (count == 6)
        {
            count++;
            check = true;
        }
        if (check)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}