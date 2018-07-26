#include <iostream>
using namespace std;

int main(){
  int a, b, s;
  while(1){
    cin >> a >> b;
    if(a == 0 && b == 0) break;
    if(a > b){
      s = a;
      a = b;
      b = s;
    }
    cout << a << " " << b << endl;
  }
  return 0;
}
