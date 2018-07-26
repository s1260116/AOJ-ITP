#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n, s;
  vector<int> a;
  cin >> n;
  a.resize(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int i = 0; i < n / 2; ++i){
    s = a[i];
    a[i] = a[n-1-i];
    a[n-1-i] = s;
  }
  for(int i = 0; i < n; i++){
    if(i == n - 1) cout << a[i] << endl;
    else cout << a[i] << " ";
  }
  return 0;
}
