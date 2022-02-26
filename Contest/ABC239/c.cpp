#include <bits/stdc++.h>
using namespace std;
bool is_5distance(int x, int y, int a1, int a2){
    int ans = ((x - a1) * (x - a1) + (y - a2) * (y - a2)) * ((x - a1) * (x - a1) + (y - a2) * (y - a2));
    if (ans == 5) {
        return true;
    }else {
        return false;
    }
}
int main () {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
}