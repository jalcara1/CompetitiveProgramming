#include <bits/stdc++.h>
using namespace std;

int main(){
  
  string string;
  bool first = true;
  while(getline (cin,string)) {
    for(int i =0; i< string.size(); i++){
      if(string[i] == '"'){
	if(first){
	  string.erase(i, 1);
	  string.insert(i, "``");
	  first = false;
	}else{
	  string.erase(i, 1);
	  string.insert(i, "''");
	  first = true;
	}
      }
    }
    cout << string << endl;
  }
  return 0;
}
