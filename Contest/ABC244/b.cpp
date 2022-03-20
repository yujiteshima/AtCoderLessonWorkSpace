#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int direction = 1;
    int x = 0;
    int y = 0;
    for (int i = 0; i < n; ++i)
    {

        if (s[i] == 'S')
        {
            if (direction % 4 == 1)
            {
                ++x;
            }
            else if (direction % 4 == 2)
            {
                --y;
            }
            else if (direction % 4 == 3)
            {
                --x;
            }
            else if (direction % 4 == 0)
            {
                ++y;
            }
        }
        else if (s[i] == 'R')
        {
            ++direction;
        }
    }
    cout << x << " " << y << endl;
    return 0;
}