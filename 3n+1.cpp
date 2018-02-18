#include <bits/stdc++.h>
using namespace std;
int main(){
  long long i, j, mayor, tam, n, ciclo;
  while(cin >> i >> j){
    mayor =0;
    if(i <= j){
      for(int x =i; x<= j; x++){
	n = x;
	ciclo =0;
	while(true){
	  if(n == 1){
	    ciclo++;
	    break;
	  }else if((n%2) !=0){
	    n = (3*n)+1;
	    ciclo++;
	  }else{
	    n = n/2;
	    ciclo++;
	  }
	}
	if(ciclo > mayor){
	  mayor = ciclo;
	}
      }
    }else{
      for(int x =i; x>= j; x--){
	n = x;
	ciclo =0;
	while(true){
	  if(n == 1){
	    ciclo++;
	    break;
	  }else if((n%2) !=0){
	    n = (3*n)+1;
	    ciclo++;
	  }else{
	    n = n/2;
	    ciclo++;
	  }
	}
	if(ciclo > mayor){
	  mayor = ciclo;
	}
      }
    }
    cout << i << " " << j << " " << mayor << endl;
  }
  return 0;
}
