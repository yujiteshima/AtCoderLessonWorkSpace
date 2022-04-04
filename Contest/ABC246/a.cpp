#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main()
{
    int x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int x4, y4;
    if (x1 == x2)
    {
        x4 = x3;
    }
    else if (x2 == x3)
    {
        x4 = x1;
    }
    else if (x1 == x3)
    {
        x4 = x2;
    }
    if (y1 == y2)
    {
        y4 = y3;
    }
    else if (y2 == y3)
    {
        y4 = y1;
    }
    else if (y1 == y3)
    {
        y4 = y2;
    }
    cout << x4 << " " << y4 << endl;
    return 0;
}