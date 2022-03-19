#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int n;
    cin >> n;
    vector<pair<double, double>> a(n, pair<double, double>());
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    double maxDist = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            double temp = sqrt((a[i].first - a[j + 1].first) * (a[i].first - a[j + 1].first) + (a[i].second - a[j + 1].second) * (a[i].second - a[j + 1].second));
            if(temp > maxDist){
                maxDist = temp;
            }
        }
    }
    cout << fixed << setprecision(6) <<maxDist << endl;
    return 0;
}