#include <iostream>
#include <math.h>
using namespace std;

int main () {
    long long N;
    cin >> N;
    long long a;
    a = pow(2, 31);
    if((-a <= N) && (N < a)){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}