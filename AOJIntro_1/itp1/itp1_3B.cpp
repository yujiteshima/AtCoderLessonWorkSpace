#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 1;
    while (true)
    {
        int a;
        cin >> a;
        if (a == 0)
        {
            break;
        }
        cout << "Case " << count << ": " << a << endl;
        ++count;
    }
    return 0;
}