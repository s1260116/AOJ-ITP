#include <iostream>
using namespace std;

int main(){
  int a, b, c, s;
  cin >> a >> b >> c;
  if(a > c){
    s = a;
    a = c;
    c = s;
  }
  if(b > c){
    s = b;
    b = c;
    c = s;
  }
  if(a > b){
    s = a;
    a = b;
    b = s;
  }
  cout << a << " " << b << " " << c << endl;
  return 0;
}
