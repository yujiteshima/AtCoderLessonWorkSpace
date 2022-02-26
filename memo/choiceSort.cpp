#include <bits/stdc++.h>
using namespace std;

void selectSort(int *A, int n, int *c){
    for(int i=0; i<n; ++i){
        int minj = i;
        for(int j = i; j < n; ++j){
            if(A[j] < A[minj]) {
                minj = j;
            }
        }
        if( i != minj) {
            swap(A[i], A[minj]);
            *c += 1;
        }
    }
}

int main (void) {
    int n, count = 0;
    int *c;
    c = &count;

    cin >> n;
    int *A = new int[n];
    for (int i = 0; i < n; ++i){
        cin >> A[i];
    }
    selectSort(A, n, c);
    for (int i = 0; i < n - 1; ++i){
        cout << A[i] << " ";
    }
    cout << A[n - 1] << endl;
    cout << count << endl;
    return 0;
}