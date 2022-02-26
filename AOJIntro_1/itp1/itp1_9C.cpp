#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int taro = 0, hanako = 0;
    for (int i = 0; i < n; ++i)
    {
        string st1, st2;
        cin >> st1 >> st2;
        if (st1 > st2)
        {
            taro += 3;
        }
        else if (st1 == st2)
        {
            taro += 1;
            hanako += 1;
        }
        else
        {
            hanako += 3;
        }
    }
    cout << taro << " " << hanako << endl;
    return 0;
}