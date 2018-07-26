#include <iostream>
using namespace std;

int main(){
  int k[4][3][10] = {{{},{},{}},{{},{},{}},{{},{},{}},{{},{},{}}};
  int n, b, f, r, v;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> b >> f >> r >> v;
    k[b-1][f-1][r-1] += v;
  }
  for(int z = 0; z < 4; z++){
    for(int y = 0; y < 3; y++){
      for(int x = 0; x < 10; x++){
	cout << " " << k[z][y][x];
      }
      cout << endl;
    }
    if(z != 3) cout << "####################" << endl;
  }
  return 0;
}
