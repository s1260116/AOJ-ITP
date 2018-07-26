#include <iostream>
#include <cstdio>
using namespace std;

int count[26];

int main(){
  char c;
  while(1){
    cin >> c;
    if(cin.eof()) break;
    if(c < 'a') c += 32;
    if(c < 'a' || c > 'z') continue;
    count[c-'a']++;
  }
  for(int i = 0; i < 26; i++){
    c = 'a' + i;
    cout << c << " : " << count[i] << endl;
  }
  return 0;
}
