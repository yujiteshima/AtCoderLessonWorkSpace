#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        int h, w;
        cin >> h >> w;
        if (h == 0 and w == 0)
        {
            break;
        }
        for (int i = 0; i < h; ++i)
        {
            // first line and last line
            if (i == 0 or i == (h - 1))
            {
                for (int j = 0; j < w; ++j)
                {
                    cout << "#";
                }
                cout << endl;
                // other line
            }
            else
            {
                cout << "#";
                for (int j = 0; j < (w - 2); ++j)
                {
                    cout << ".";
                }
                cout << "#" << endl;
            }
        }
        cout << endl;
    }
    return 0;
}