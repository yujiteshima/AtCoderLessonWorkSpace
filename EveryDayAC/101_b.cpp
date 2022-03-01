#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    ll sum = 0;
    cin >> n;
    int temp = n;
    while (temp)
    {
        sum += temp % 10;
        temp /= 10;
    }
    if (n % sum == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}