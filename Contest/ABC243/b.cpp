#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    set<int> se1;
    set<int> se2;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        se1.insert(A[i]);
    }
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
        se2.insert(B[i]);
    }
    int ans1 = 0;
    for (int i = 0; i < N; i++)
    {
        if(A[i] == B[i]){
            ++ans1;
        }
    }
    vector<int> st1st2;
    set_intersection(se1.begin(), se1.end(), se2.begin(), se2.end(), back_inserter(st1st2));
    cout << ans1 << endl;
    cout << st1st2.size()-ans1 << endl;

    return 0;
}