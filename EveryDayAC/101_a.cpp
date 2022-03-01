#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s;
    cin >> s;
    int num = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '+')
        {
            ++num;
        }
        else
        {
            --num;
        }
    }
    cout << num << endl;
    return 0;
}