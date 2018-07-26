#include <iostream>
using namespace std;

int main(){
  int a, b, c, y;
  y = 0;
  cin >> a >> b >> c;
  for(a; a <= b; ++a){
    if(c % a == 0) y++;
  }
  cout << y << endl;
  return 0;
}
