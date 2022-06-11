#include <iostream>
using namespace std;
int main() {
  char b;
  cin >> b;
  char ans = b == 'A' ? 'T' : b == 'T' ? 'A' : b == 'C' ? 'G' : 'C';
  cout << ans << endl;
  return 0;
}