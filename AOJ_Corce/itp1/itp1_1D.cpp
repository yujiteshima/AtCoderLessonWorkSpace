#include <bits/stdc++.h>
using namespace std;

int main()
{
    int S;
    cin >> S;
    int h = S / (60 * 60);
    int m = (S % (60 * 60)) / 60; // 時間で割って余った分だが秒数単位よってさらに60で割って分単位に変える。
    int s = S % (60);
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}