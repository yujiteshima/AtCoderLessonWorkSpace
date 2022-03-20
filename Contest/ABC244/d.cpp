#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () 
{
    string r, g, b;
    cin >> r >> g >> b;
    string rgb = r + g + b;
    string brg = b + r + g;
    string gbr = g + b + r;
    string a, b_, c;
    cin >> a >> b_ >> c;
    string abc = a + b_ + c;
    if(abc == rgb || abc == brg || abc == gbr){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
    return 0;
}