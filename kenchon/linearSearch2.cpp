#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    // 入力を受け取る
    int N, v;
    cin >> N >> v;
    vector<int> a(N);
    for (int i = 0; i < N; ++i)
        cin >> a[i];
    int found_id = -1; // 初期値-1などのはあり得ない値に
    // bool exist = false; // 初期値はfalse
    for (int i = 0; i < N; ++i)
    {
        if (a[i] == v)
        {
            found_id = i;
            break;
        }
    }
    // 結果出力(-1の時に見つからなかったことを表す)
    cout << found_id << endl;

    return 0;
}