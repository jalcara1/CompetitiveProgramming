#include <bits/stdc++.h>
using namespace std;

int main(){
  int entrada;
  while(cin >> entrada){
    int n = entrada;
    int num =0;
    int i =0;
    int salida = true;
    int arr[n];
    while(entrada--){
      cin >> num;
      arr[i] = num;
      i++;
    }
    bool val[n];
    for(int i =0; i< n; i++){
      val[i] = false;
    }
    for(int i =0; i< n-1; i++){
      val[abs(arr[i]-arr[i+1])] = true;
    }
    for(int i =1; i <= n-1; i++){
      if(val[i] == false){
	salida = false;
	break;
      }
    }
    if(salida == false){
      cout << "Not jolly" << endl;
    }else{
      cout << "Jolly" << endl;
    }
  }
}
