#include <iostream>
using namespace std;

int main(){
  int x, c;
  c = 1;
  while(1){
    cin >> x;
    if(x == 0) break;
    cout << "Case " << c << ": " << x << endl;
    c++;
  }
  return 0;
}
