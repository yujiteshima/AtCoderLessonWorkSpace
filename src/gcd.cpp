#include<iostream>
using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main () {
    long long a, b, c;
    cin >> a >> b >> c;
    long long cutSize = gcd(a, gcd(b, c));
    long long result = (a / cutSize - 1) + (b / cutSize - 1) + (c / cutSize - 1);
    cout << result;
    return 0;
}