#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int n;
    cin >> n;
    map<string, int> elect{};
    for (int i = 0; i < n; ++i){
        string name;
        cin >> name;
        auto item = elect.find(name);
        if(item != elect.end()){
            elect[name]++;
        }else {
            elect.insert(make_pair(name, 1));
        }
    }
    int min = 0;
    string minName;
    for (auto i : elect)
    {
        if(min < elect[i.first]){
            min = elect[i.first];
            minName = i.first;
        }
    }
    cout << minName << endl;
    return 0;
}