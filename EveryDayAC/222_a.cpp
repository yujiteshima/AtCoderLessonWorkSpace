#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string n;
    cin >> n;
    string ans = "";
    if (n.size() == 1)
    {
        ans = "000" + n;
    }
    else if (n.size() == 2)
    {
        ans = "00" + n;
    }
    else if (n.size() == 3)
    {
        ans = "0" + n;
    }
    else if (n.size() == 4)
    {
        ans = n;
    }
    cout << ans << endl;
    return 0;
}