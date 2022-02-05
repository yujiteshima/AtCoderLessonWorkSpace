#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int sum4 = (1 + N) * N / 2 * 4;
    int inputSum = 0;
    for (int i = 0; i < (N * 4 - 1); ++i)
    {
        int a;
        cin >> a;
        inputSum += a;
    }
    cout << sum4 - inputSum << endl;
    return 0;
}