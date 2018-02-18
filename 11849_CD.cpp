#include <iostream>
using namespace std;
#define MAXN 1000010

int main(){
  int N, M, Jack[MAXN], Jill, result, pos;
  while(cin >> N >> M && N && M){
    result =0;    
    for(int i =0; i< N; ++i){
      cin >> Jack[i];
    }
    bool next;
    for(int i =0; i< M; ++i){
      cin >> Jill;
      next = true;
      pos = 0;
      while(next && pos < N){
	if(Jack[pos] == Jill){
	  result++;
	  next = false;
	}else if(Jack[pos] > Jill){
	  next = false;
	}else{
	  pos++;
	}
      }
    }    
    cout << result << endl;
  }
  return 0;
}
