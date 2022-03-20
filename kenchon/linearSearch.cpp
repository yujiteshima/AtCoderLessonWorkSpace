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

    bool exist = false; // 初期値はfalse
    for (int i = 0; i < N; ++i)
    {
        if (a[i] == v)
        {
            exist = true;
        }
    }
    if (exist)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}