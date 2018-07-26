#include <iostream>
using namespace std;

int main(){
  int n, c, max, min;
  long long int sum;
  max = -1000000;
  min = 1000000;
  sum = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> c;
    if(c > max) max = c;
    if(c < min) min = c;
    sum += c;
  }
  cout << min << " " << max << " " << sum << endl;
  return 0;
}
