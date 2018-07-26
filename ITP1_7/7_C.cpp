#include <iostream>
using namespace std;

int main(){
  int r, c, sum, total;
  total = 0;
  cin >> r >> c;
  int **sheet = new int*[r+1];
  for(int i = 0; i < r + 1; i++){
    sheet[i] = new int[c+1];
  }
  for(int y = 0; y < r; y++){
    sum = 0;
    for(int x = 0; x < c; x++){
      cin >> sheet[y][x];
      sum += sheet[y][x];
    }
    sheet[y][c] = sum;
  }
  for(int x = 0; x < c; x++){
    sum = 0;
    for(int y = 0; y < r; y++){
      sum += sheet[y][x];
      total += sheet[y][x];
    }
    sheet[r][x] = sum;
  }
  sheet[r][c] = total;
  for(int y = 0; y < r + 1; y++){
    for(int x = 0; x < c + 1; x++){
      if(x == c) cout << sheet[y][x];
      else cout << sheet[y][x] << " ";
    }
    cout << endl;
  }
  return 0;
}
