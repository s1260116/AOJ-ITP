#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  double r, m, e;
  const double p = M_PI;
  cin >> r;
  m = r*r*p;
  e = 2*r*p;
  cout << fixed;
  cout << setprecision(10) << m << " " << e << endl;
  return 0;
}
