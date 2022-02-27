#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> vec[i];
    }
    int ans = 0;
    while (1)
    {
        bool flg = false;
        for (int i = 0; i < n; ++i)
        {
            if (vec[i] % 2 != 0)
            {
                flg = true;
            }
        }
        if(flg){
            break;
        }
        for (int i = 0; i < n; ++i){
            vec[i] = vec[i] / 2;
        }
        ++ans;
    }
    cout << ans << endl;
    return 0;
}