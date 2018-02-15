#include <iostream>
using namespace std; 

int main() {
  
  int N, T;

  cin >> T;
  for(int i = 0; i < T; i++) {
    cin >> N;

    int h = 0, l = 0, prev = 0, cur = 0;
    cin >> prev;
    for(int j = 1; j < N; j++) {
      cin >> cur;
      if(cur > prev){
	h++;
      }else if(cur < prev){
	l++;
      }
      prev = cur;
    }

    cout << "Case " << i << ": " << h << " " << l << endl;
  }
  return 0;
}
