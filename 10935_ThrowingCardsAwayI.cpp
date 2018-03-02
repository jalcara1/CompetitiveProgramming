#include <iostream>
#include <queue>
using namespace std;

int main(){

  queue<int> deck;
  int cases;
  while(cin >> cases && cases){
    for(int i =1; i<= cases; ++i){
      deck.push(i);
    }
    cout << "Discarded cards:";
    string sep = " ";
    while(deck.size() > 1){
      cout << sep << deck.front();
      sep = ", ";
      deck.pop();
      deck.push(deck.front());
      deck.pop();
    }
    cout << "\nRemaining card: " << deck.front() << endl;
    deck.pop();
  }
  return 0;
}
