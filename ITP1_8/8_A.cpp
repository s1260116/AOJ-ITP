#include <iostream>
#include <cctype>
#include <cstdio>
using namespace std;

int main(){
  char s[1200];
  int c = 0;
  while(1){
    scanf("%c", &s[c]);
    if(s[c] == '\n') break;
    if(isalpha(s[c])){
      if(islower(s[c])){
	s[c] = toupper(s[c]);
      }
      else{
	s[c] = tolower(s[c]);
      }
    }
    cout << s[c];
    c++;
  }
  cout << endl;
  return 0;
}
