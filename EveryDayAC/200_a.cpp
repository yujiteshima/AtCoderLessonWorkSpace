#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main()
{
    int n;
    cin >> n;
    if (n > 100)
    {
        int a = n / 100;
        int b = n % (a * 100);
        if (b > 0)
        {
            a += 1;
        }
        cout << a << endl;
    }
    else
    {
        cout << 1 << endl;
    }
    return 0;
}