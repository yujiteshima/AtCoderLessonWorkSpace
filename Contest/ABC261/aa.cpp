#include <bits/stdc++.h>
using namespace std;
int arr[101];
int arr_len = sizeof(arr) / sizeof(arr[0]);
int main() {
  int L1, R1, L2, R2, cnt = 0;
  cin >> L1 >> R1 >> L2 >> R2;
  for (int i = 0; i < arr_len; i++) {
    if (i >= L1 && i <= R1) arr[i]++;
    if (i >= L2 && i <= R2) arr[i]++;
  }
  for (int i = 0; i < arr_len; i++) {
    if (arr[i] == 2) cnt++;
  }
  if (cnt > 0) cnt--;
  cout << cnt << endl;
  return 0;
}