#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void)
{
    string s, t;
    cin >> s >> t;

    for (int k = 0; k <= 25; k++)
    {
        string s2 = s;
        for (int i = 0; i < (int)s.size(); i++)
        {
            s2[i] = ((s2[i] - 'a') + k) % 26 + 'a';
        }
        if (s2 == t)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}
