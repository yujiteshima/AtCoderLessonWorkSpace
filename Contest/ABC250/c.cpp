#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
const ll INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 1'000'000'007; // mod(10^9 + 7)

// int main () {
//     int n;
//     cin >> n;
//     vector<int> v(n + 1), pos(n + 1);
//     rep(i, n+1){
//         v[i+1] = i;
//         pos[i+1] = i;
//     }
//     int q;
//     cin >> q;
//     vector<int> x(q);
//     rep(i, q){
//         cin >> x[i];
//     }
//     rep(i, q){
//         int p0 = pos[x[i]];
//         int p1 = p0;
//         if(p0 != n){
//             p1++;
//         }else{
//             p1--;
//         }
//         int v0 = v[p0];
//         int v1 = v[p1];
//         swap(v[p0], v[p1]);
//         swap(pos[v0], pos[v1]);
//     }
//     rep(i, n+1){
//         if((i+1) != 1){
//             cout << ' ';
//             cout << v[i];
//         }
//     }
//     cout << endl;
//     return 0;
// }

int main()
{

    int N;
    cin >> N;

    vector<int> val(N + 1), pos(N + 1);
    for (int i = 1; i <= N; i++)
        val[i] = i, pos[i] = i;

    int Q;
    cin >> Q;

    vector<int> x(Q);
    for (int i = 0; i < Q; i++)
        cin >> x[i];

    for (int i = 0; i < Q; i++)
    {
        int p0 = pos[x[i]];
        int p1 = p0;
        if (p0 != N)
            p1++;
        else
            p1--;
        int v0 = val[p0];
        int v1 = val[p1];
        swap(val[p0], val[p1]);
        swap(pos[v0], pos[v1]);
    }

    for (int i = 1; i <= N; i++)
    {
        if (i != 1)
            cout << ' ';
        cout << val[i];
    }
    cout << endl;

    return 0;
}
