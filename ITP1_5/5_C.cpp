#include <iostream>
using namespace std;

int main(){
  int H, W;
  while(1){
    cin >> H >> W;
    if(H == 0 && W == 0) break;
    for(int y = 0; y < H; y++){
      for(int x = 0; x < W; x++){
	if(y % 2 == 0){
	  if(x % 2 == 0) cout << "#";
	  else cout << ".";
	}
	else{
	  if(x % 2 == 0) cout << ".";
	  else cout << "#";
	}
      }
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}
