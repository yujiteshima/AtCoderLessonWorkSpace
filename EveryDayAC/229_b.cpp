#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// 20220315
int main () {
    string a, b;
    cin >> a >> b;
    int n = min(a.size(), b.size());
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    bool isHard = false;
    for (int i = 0; i < n; ++i)
    {
        int temp = (a[i] - '0') + (b[i] - '0');
        if(temp >= 10){
            isHard = true;
            break;
        }
    }
    if(isHard){
        cout << "Hard" << endl;
    } else {
        cout << "Easy" << endl;
    }
        return 0;
}

// int main () {
//     string a, b;
//     cin >> a >> b;
//     int n = min(a.size(), b.size());
//     reverse(a.begin(), a.end());
//     reverse(b.begin(), b.end());

//     bool isHard = false;
//     for (int i = n; i < n; ++i)
//     {
//         if(((a[i - 1] - '0') + (b[i - 1] - '0')) >= 10){
//             isHard = true;
//         }
//     }
//     if(isHard){
//         cout << "Hard" << endl;
//     }else {
//         cout << "Easy" << endl;
//     }
//     return 0;
// }