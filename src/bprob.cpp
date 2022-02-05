#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
// 2点を求める関数
double calc_dist(int x1, int y1, int x2, int y2) {
 return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main() {
  int N;
  cin >> N;
  vector<int> x(N), y(N);
  for (int i = 0; i < N; ++i) cin >> x[i] >> y[i];
  double max_dist = 0;
  
  for (int i = 0; i < N; ++i) {
    for(int j = i + 1; j < N; ++j) {
      double dist_i_j = calc_dist(x[i], y[i], x[j], y[j]);
      if (dist_i_j > max_dist) {
        max_dist = dist_i_j;
      }
    }
  }
  
  cout << fixed << setprecision(15) << max_dist << endl;
  return 0;
}