#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool exist = false;
    for (int i = a; i <= b; ++i)
    {
        if (i % c == 0)
        {
            cout << i << endl;
            exist = true;
            break;
        }
    }
    if (!exist)
    {
        cout << -1 << endl;
    }
    return 0;
}