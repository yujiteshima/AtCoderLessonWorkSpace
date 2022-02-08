#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin >> s;
    int startIdx = -1;
    int endIdx = -1;
    for (int i = 0; i < s.size(); ++i)
    {
        if(s[i] == 'A'){
            if(startIdx == -1) {
                startIdx = i;
            }
        }
        if(s[i] == 'Z'){
            endIdx = i;
        }
    }
    cout << (endIdx - startIdx + 1) << endl;
    return 0;
}