#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int X, Y;
    cin >> X >> Y;
    double insuf = Y - X;
    int ans = ceil(insuf / 10);
    if (insuf <= 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << ans << endl;
    }
}