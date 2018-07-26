#include <iostream>
using namespace std;

int main(){
  int n, sum, s1, s2, c;
  c = 0;
  while(1){
    cin >> n >> sum;
    if(n == 0 && sum == 0) break;
    for(int z = 1; z <= n - 2; z++){
      s1 = s2 = 0;
      for(int y = 1 + z + s1; y <= n - 1; y++){
	for(int x = 2 + z + s2; x <= n; x++){
	  if((z + y + x) == sum) c++;
	}
	s2++;
      }
      s1++;
    }
    cout << c << endl;
    s1 = s2 = c = 0;
  }
  return 0;
}
