#include <bits/stdc++.h>
using namespace std;
int main(){
  
  int cases;
  cin >> cases;
  while(cases--){
    int n, m;
    cin >> n >> m;
    long long tries = 0;
    tries += (long long) (m - n) * n;
    tries += (long long) (n) * (n-1)/2;
    cout << tries << endl;
  }
  return 0;
}
