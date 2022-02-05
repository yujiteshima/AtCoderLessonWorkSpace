#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main () {
    int N, Q;
    cin >> N >> Q;
    vector<int> a(N);
    map<string, int> memo;
    for (int i = 0; i < N; ++i)
        cin >> a[i];
    for (int i = 0; i < Q; i++){
        int x, k;
        cin >> x >> k;
        int cnt = 0;
        int flg = 1;
        string a, b, c;
        a = to_string(x);
        b = to_string(k);
        c = a + "_" + b;

        if (memo.find(c) != memo.end())
        {
            cout << memo[c] << endl;
            continue;
        }

        for (int j = 0; j < N; ++j)
        {
            if(x == a[j]) {
                cnt++;
                if (k == cnt) {
                    cout << j + 1 << endl;
                    memo[c] = j + 1;
                    flg = 0;
                    cnt = 0;
                    break;
                }
            }
        }
        if(flg == 1){
            cout << -1 << endl;
        }else{
            flg = 1;
        }
    }
    return 0;
}