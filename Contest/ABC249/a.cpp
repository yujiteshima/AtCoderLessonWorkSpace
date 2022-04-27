#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main () {
    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    // takahashi
    int takahashi = 0;
    int cnt = 0;
    for (int i = 1; i <= x; i++)
    {
        if(cnt < a){
        takahashi += b;
        }
        ++cnt;
        if (cnt == a + c)
        {
            cnt = 1;
        }
    }
    int aoki = 0;
    cnt = 0;
    for (int i = 1; i <= x; i++)
    {
        if (cnt < d)
        {
            aoki += e;
        }
        ++cnt;
        if (cnt == d + f)
        {
            cnt = 1;
        }
    }
    // cout << takahashi << " " << aoki << endl;
    // takahashi = x / (a + c) * a * b;
    // if(takahashi != 0){
    // takahashi += x % (a + c) * b;
    // } else {
    //     if(x > a){
    //         takahashi += a * b;
    //     }else{
    //         takahashi += x * b;
    //     }
    // }
    // aoki
    // int aoki = 0;
    // aoki = x / (d + f) * e;
    // if(aoki != 0){
    // aoki += x % (d + f) * e;
    // }else {
    //     if(x > d){
    //         aoki += d * e;
    //     } else {
    //         aoki += x * e;
    //     }
    // }
    if(takahashi > aoki){
        cout << "Takahashi" << endl;
    }else if(takahashi < aoki){
        cout << "Aoki" << endl;
    }else if(takahashi == aoki){
        cout << "Draw" << endl;
    }
    return 0;
}