#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  int sum = 0;
  char c;
  bool end = true;
  bool cal = false;
  while(1){
    cal = false;
    while(1){
      scanf("%c", &c);
      if(c == '0' && cal == false) end = false;
      if(c == '\n') break;
      sum += c - '0';
      cal = true;
    }
    if(end == false) break;
    cout << sum << endl;
    sum = 0;
  }
  return 0;
}
