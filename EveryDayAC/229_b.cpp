#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    string a, b;
    cin >> a >> b;
    int n = min(a.size(), b.size());
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    bool isHard = false;
    for (int i = n; i < n; ++i)
    {
        if(((a[i - 1] - '0') + (b[i - 1] - '0')) >= 10){
            isHard = true;
        }
    }
    if(isHard){
        cout << "Hard" << endl;
    }else {
        cout << "Easy" << endl;
    }
    return 0;
}