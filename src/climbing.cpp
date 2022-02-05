#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];
    int cnt = 0;
    for (int i = 0; i < N; ++i){
        cnt = i;
        if(a[i] >= a[i + 1]) {
            break;
        }
    }
    cout << a[cnt];
    return 0;
}