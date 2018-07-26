#include <iostream>
#include <vector>
using namespace std;

int main(){
  int i, n;
  char g;
  int d[4][13] = {{},{},{},{}};
  cin >> n;
  for(int c = 0; c < n; c++){
    cin >> g >> i;
    switch(g){
    case 'S':
      d[0][i-1] = 1;
      break;
    case 'H':
      d[1][i-1] = 1;
      break;
    case 'C':
      d[2][i-1] = 1;
      break;
    case 'D':
      d[3][i-1] = 1;
    }
  }
  for(int y = 0; y < 4; y++){
    for(int x = 0; x < 13; x++){
      if(d[y][x] == 0){
	switch(y){
	case 0:
	  cout << "S " << x+1 << endl;
	  break;
	case 1:
	  cout << "H " << x+1 << endl;
	  break;
	case 2:
	  cout << "C " << x+1 << endl;
	  break;
	case 3:
	  cout << "D " << x+1 << endl;
	}
      }
    }
  }
  return 0;
}
