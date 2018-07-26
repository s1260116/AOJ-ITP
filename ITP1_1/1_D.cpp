#include <iostream>
using namespace std;

int main(){
  int s, h, m, s2;
  cin >> s;
  h = s / 3600;
  m = (s / 60)% 60;
  s2 = s % 60;
  cout <<h<<":"<<m<<":"<<s2<< endl;
  return 0;
}
