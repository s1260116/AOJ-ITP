#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

char c1[210];
char c2[101];
char p[101];

int main(){
  int i = 0;
  while(1){
    scanf("%c", &c1[i]);
    if(c1[i]=='\n'){
      c1[i] = '\0';
      break;
    }
    i++;
  }
  i = 0;
  while(1){
    scanf("%c", &p[i]);
    if(p[i]=='\n'){
      p[i] = '\0';
      break;
    }
    i++;
  }
  strcpy(c2, c1);
  strcat(c1, c2);
  if(strstr(c1, p) == NULL) cout << "No" << endl;
  else cout << "Yes" << endl;
  return 0;
}
