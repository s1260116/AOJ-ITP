#include <iostream>
using namespace std;

int main(){
  int a, b, r; 
  char op;
  while(1){
    cin >> a >> op >> b;
    if(op == '?') break;
    switch(op){
    case '+':
      r = a + b;
      break;
    case '-':
      r = a - b;
      break;
    case '*':
      r = a * b;
      break;
    case '/':
      r = a / b;
    }
    cout << r << endl;
  }
  return 0;
}
