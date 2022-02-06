#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    vector<vector<int>> card(4, vector<int>(13));
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string mark;
        int markNum;
        // S:0, H:1, C:2, D:3
        int cardNum;
        cin >> mark >> cardNum;
        if (mark == "S"){
            markNum = 0;
        } else if (mark == "H") {
            markNum = 1;
        } else if (mark == "C") {
            markNum = 2;
        } else if (mark == "D") {
            markNum = 3;
        }
        card[markNum][cardNum - 1] = 1;
    }
    for (int i = 0; i < 4; ++i){
        for (int j = 0; j < 13; ++j) {
            if(card[i][j] == 0){
                if (i == 0)
                {
                    cout << "S" << " ";
                }
                else if (i == 1)
                {
                    cout << "H" << " ";
                }
                else if (i == 2)
                {
                    cout << "C" << " ";
                }
                else if (i == 3)
                {
                    cout << "D" << " ";
                }

                cout << j + 1 << endl;
            }
        }
    }
        return 0;
}