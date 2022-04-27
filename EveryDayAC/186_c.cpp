#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool judge_ten(int x){
    int tmp = x;
    bool ret = false;
    while(tmp > 0){
        if(tmp % 10 == 7){
            ret = true;
        }
        tmp /= 10;
    }
    return ret;
}
bool judge_eight(int x){
    int tmp = x;
    bool ret = false;
    while (tmp > 0)
    {
        if (tmp % 8 == 7)
        {
            ret = true;
        }
        tmp = tmp / 8;
    }
    return ret;
}
int main () {
    int N;
    cin >> N;
    int ans = 0;
    rep(i, N){
    bool existTen = judge_ten(i);
    bool existEight = judge_eight(i);
    if(!(existTen || existEight)){
        ++ans;
    }
    }
    cout << ans << endl;
    return 0;
}