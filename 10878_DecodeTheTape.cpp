#include <bits/stdc++.h>
using namespace std;

int decoding[8];

int decode(string in){
  string aux = "";
  for(int i = 0; i < in.size(); ++i ){
    if(in[i] == 'o')  aux += '1';
    else if (in[i] == ' ') aux += '0'; 
  }
	
  int out = 0;
  int potencia=128;
  for(int i = 0; i < aux.size(); ++i){
    if(aux[i] == '1') out += potencia;
    potencia/=2; 
  } 
  return out;
}

int main(){
  int n,b,aux;
  string in,result = "";
  while(getline(cin , in)){
    int aux=decode(in);
    if(aux){
      char aux2=aux;
      result += aux2 ;
    }
  }
  cout << result;
  return 0;
}
