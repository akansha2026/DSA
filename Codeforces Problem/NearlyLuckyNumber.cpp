#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long count = 0;
    long long temp = n;
    while (temp > 0)
    {
        int lastDigit = temp % 10;
        if (lastDigit == 7 || lastDigit == 4)
        {
            count++;
        }
        temp = temp / 10;
    }
    bool check = false;
    while (count > 0)
    {
        int lastDigit = count % 10;
        if (lastDigit == 7 || lastDigit == 4)
        {
            check = true;
        }else{
            check = false;
            break;
        }
        count = count / 10;
    }

    if (check)
        cout << "YES";
    else 
        cout << "NO";
}