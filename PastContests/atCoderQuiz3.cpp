#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 42)
    {
        n += 1;
    }
    string ans = "AGC";
    if (to_string(n).size() == 1)
    {
        ans = ans + "00" + to_string(n);
    }
    else if (to_string(n).size() == 2)
    {
        ans = ans + "0" + to_string(n);
    }
    else
    {
        ans = ans + to_string(n);
    }
    cout << ans << endl;
    return 0;
}