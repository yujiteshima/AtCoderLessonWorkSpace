#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    //map<string, string> dice = {{"1", "6"}, {"2", "5"}, {"3", "4"}, {"4", "3"}, {"5", "2"}, {"6", "1"}};
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 21 - a - b - c;
    cout << ans << endl;

    return 0;
}