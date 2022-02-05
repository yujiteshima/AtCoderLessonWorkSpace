#include <iostream>
using namespace std;
int main()
{
    int input, a, b, c;
    cin >> input;
    a = input / 100;
    b = input % 100 / 10;
    c = input % 10;
    cout << (a + b + c) * 111;
}