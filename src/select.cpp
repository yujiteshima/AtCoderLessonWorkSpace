#include<iostream>
#include <vector>
using namespace std;

int main () {
    int N, K;
    cin >> N >> K;
    vector<int> A(N), B(N);
    for (int i = 0; i <N; ++i)
        cin >> A[i];
    for (int i = 0; i <N; ++i)
        cin >> B[i];
    int diff = 0;
    for (int i = 0; i < N; ++i){
        if(A[i] > B[i])
            diff += (A[i] - B[i]);
        else
            diff += (B[i] - A[i]);
    }
    int judgeMentValue = K - diff;
    if(judgeMentValue < 0){
        cout << "No" << endl;
    }
    else if(judgeMentValue == 0)
    {
        cout << "Yes" << endl;
    }
    else if (judgeMentValue % 2 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}