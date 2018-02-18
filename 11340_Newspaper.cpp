#include <bits/stdc++.h>
using namespace std;

int main(){
  int k, l, m, t;
  map <char, double> myMap;
  map <char, double>::iterator iter;
  char c;
  string line;
  double v, result;

  scanf("%d", &t);
  while(t--){
    result = 0;
    scanf("%d", &k);
    for(int i = 0; i < k; i++){
      cin >> c >> v;
      myMap[c] = v;
    }
    scanf("%d", &m);
    cin.ignore();
    for(int i = 0; i < m; i++){
      line = "";
      getline(cin, line);
      l = line.size();
      for(int j = 0; j < l; j++){
	iter = myMap.find(line[j]);
	if(iter != myMap.end()){
	  result += iter->second;
	}
      }
    }
    result /= 100;
    printf("%0.2lf$\n", result);
    myMap.clear();
  }
  return 0;
}
