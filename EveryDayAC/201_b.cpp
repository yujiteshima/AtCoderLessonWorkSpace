#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    int N;
    cin >> N;
    vector<pair<int, string>> mountain(N);
    for (int i = 0; i < N; i++)
    {
        cin >> mountain[i].second >> mountain[i].first;
    }
    sort(mountain.begin(), mountain.end());
    cout << mountain[N - 2].second << endl;
    return 0;
}