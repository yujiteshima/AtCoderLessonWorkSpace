#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main()
{
    int n;
    cin >> n;
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    int starPoint = -1;
    bool isStar = true;
    if (!(c == a || c == b || d == a || d == b))
    {
        isStar = false;
    }
    else
    {
        if (c == a)
        {
            starPoint = c;
        }
        else if (c == b)
        {
            starPoint = b;
        }
        else if (d == a)
        {
            starPoint = d;
        }
        else if (d == b)
        {
            starPoint = d;
        }
        for (int i = 2; i < n - 1; i++)
        {
            int tmp1, tmp2;
            cin >> tmp1 >> tmp2;
            if (tmp1 != starPoint && tmp2 != starPoint)
            {
                isStar = false;
                break;
            }
        }
    }
    if (isStar)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}