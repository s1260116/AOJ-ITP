#include <iostream>
using namespace std;

int main(){
  int h, w;
  while(1){
    cin >> h >> w;
    if(h == 0 && w == 0) break;
    for(int y = 0; y < h; y++){
      for(int x = 0; x < w; x++){
	if(x == 0 || y == 0 || x == w-1 || y == h-1) cout << "#";
	else cout << ".";
      }
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}
