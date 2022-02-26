#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = -1000009;
    int min = 1000009;
    long long total = 0;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        if (a > max)
        {
            max = a;
        }
        if (a < min)
        {
            min = a;
        }
        total += a;
    }
    cout << min << " " << max << " " << total << endl;
    return 0;
}