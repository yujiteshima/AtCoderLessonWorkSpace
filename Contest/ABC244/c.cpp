#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int n;
    cin >> n;
    set<ll> se;
    for (int i = 1; i <= (2 * n + 1); ++i){
        se.insert(i);
    }
    int idx = 1;
    while (true)
    {
        if(idx % 2 == 1){
        auto itr = se.begin();
        cout << *itr << endl;
        se.erase(*itr);
        }else{
            int temp;
            cin >> temp;
            if(temp == 0){
                return 0;
            }
            se.erase(temp);
        }
        ++idx;
    }
    return 0;
}