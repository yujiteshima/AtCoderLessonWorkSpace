#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string x;
    cin >> x;
    string a = "";
    int b = -1;
    if (x.size() == 3)
    {
        a = x.substr(0, 1);
        b = x[2] - '0';
    }
    else
    {
        a = x.substr(0, 2);
        b = x[3] - '0';
    }
    if (b <= 2)
    {
        cout << a << '-' << endl;
    }
    else if (b <= 6)
    {
        cout << a << endl;
    }
    else
    {
        cout << a << '+' << endl;
    }
    return 0;
}