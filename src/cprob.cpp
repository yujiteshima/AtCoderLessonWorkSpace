#include <iostream>
#include <math.h>
#include <string>
#include <regex>
using namespace std;

int binary(int bina) {
    int ans = 0;
    for (int i = 0; bina > 0; i++){
        ans = ans + (bina % 2) * pow(10, i);
        bina = bina / 2;
    }
    return ans;
}

int main () {
    int k;
    cin >> k;
    int binans = binary(k + 1);
    string ans = to_string(binans);
    // ans = regex_replace(ans, regex)
    // cout << ans.replace
}