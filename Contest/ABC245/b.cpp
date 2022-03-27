#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

bool vector_finder(std::vector<int> vec, int number)
{
    auto itr = std::find(vec.begin(), vec.end(), number);
    size_t index = std::distance(vec.begin(), itr);
    if (index != vec.size())
    { // 発見できたとき
        return false;
    }
    else
    { // 発見できなかったとき
        return true;
    }
}
// int main () {
//     int N;
//     cin >> N;
//     vector<ll> a(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> a[i];

//     }
//     sort(a.begin(), a.end());
//     int count = 0;
//     for (int i = 0; i < N; i++)
//     {
//         if(count == a[i]){
//             count++;
//         }else if(count > a[i]){
//             cout << count << endl;
//             break;
//         }
//     }
//     return 0;
// }
int main () {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    if(N == 1){
        if(a[0] != 0){
            cout << 0 << endl;
            return 0;
        }
        else
        {
            cout << 1 << endl;
            return 0;
        }
    }
    sort(a.begin(), a.end());
    int ans = -1;
    for (int i = 0; i < N; i++)
    {
        if(vector_finder(a, i)){
            ans = i;
            break;
        }
    }
    if(ans == -1){
        cout << N << endl;
    }else {
        cout << ans << endl;
    }
    return 0;
}