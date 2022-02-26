#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s[13] = {0};
    int h[13] = {0};
    int c[13] = {0};
    int d[13] = {0};
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        char sp;
        int num;
        cin >> sp >> num;
        if (sp == 'S')
        {
            s[num - 1] = 1;
        }
        else if (sp == 'H')
        {
            h[num - 1] = 1;
        }
        else if (sp == 'C')
        {
            c[num - 1] = 1;
        }
        else if (sp == 'D')
        {
            d[num - 1] = 1;
        }
    }
    for (int i = 0; i < 13; ++i)
    {
        if (s[i] == 0)
        {
            cout << "S"
                 << " " << i + 1 << endl;
        }
    }
    for (int i = 0; i < 13; ++i)
    {
        if (h[i] == 0)
        {
            cout << "H"
                 << " " << i + 1 << endl;
        }
    }
    for (int i = 0; i < 13; ++i)
    {
        if (c[i] == 0)
        {
            cout << "C"
                 << " " << i + 1 << endl;
        }
    }
    for (int i = 0; i < 13; ++i)
    {
        if (d[i] == 0)
        {
            cout << "D"
                 << " " << i + 1 << endl;
        }
    }
    return 0;
}