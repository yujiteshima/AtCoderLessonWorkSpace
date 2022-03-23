#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main () {
    int n;
    cin >> n;
    int price = floor(n * 1.08);
    if (price > 206)
    {
        cout << ":(" << endl;
    }
    else if (price == 206){
        cout << "so-so" << endl;
    }else {
        cout << "Yay!" << endl;
    }
    return 0;
}