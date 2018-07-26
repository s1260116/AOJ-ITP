#include <iostream>
#include <string>
using namespace std;

int main(){
  string w, s;
  int c=0;
  cin >> w;
  while(1){
    cin >> s;
    if(s == "END_OF_TEXT") break;
    for(int i = 0; i < s.size(); i++){
      if(s[i] >= 'A' && s[i] <= 'Z'){
	s[i] += 32;
      }
    }
    if(s == w) c++;
  }
  cout << c << endl;
  return 0;
}
