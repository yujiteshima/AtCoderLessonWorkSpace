#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c)
    {
        int temp = b;
        b = c;
        c = b;
    }
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    return 0;
}