#include <iostream>
using namespace std;

int main(){
  int n, m, l;
  long long int sum;
  cin >> n >> m >> l;
  int **a = new int*[n];
  for(int i = 0; i < n; i++){
    a[i] = new int[m];
  }
  int **b = new int*[m];
  for(int i = 0; i < m; i++){
    b[i] = new int[l];
  }
  for(int y = 0; y < n; y++){
    for(int x = 0; x < m; x++){
      cin >> a[y][x];
    }
  }
  for(int y = 0; y < m; y++){
    for(int x = 0; x < l; x++){
      cin >> b[y][x];
    }
  }
  for(int z = 0; z < n; z++){
    for(int y = 0; y < l; y++){
      sum = 0;
      for(int x = 0; x < m; x++){
	sum += a[z][x] * b[x][y];
      }
      if(y == l - 1) cout << sum;
      else cout << sum << " ";
    }
    cout << endl;
  }
  return 0;
}
