#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  double x1, y1, x2, y2, x, y;
  cin >> x1 >> y1 >> x2 >> y2;
  x = (x2 - x1)*(x2 - x1);
  y = (y2 - y1)*(y2 - y1);
  cout << fixed;
  cout << setprecision(6)<< sqrt(x + y) << endl;
  return 0;
}
