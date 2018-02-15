#include <cstdio>
#include <queue>
#include <functional>
using namespace std;

int main(){
  
  int n;
  while(scanf("%d", &n), n) {
    priority_queue<int, vector<int>, greater<int> > queue;

    while(n--){
      int x;
      scanf("%d", &x);
      queue.push(x);
    }
    int total = 0, cost = 0;
    while (queue.size() > 1) {
      total = queue.top();
      queue.pop();
      total += queue.top();
      queue.pop();
      cost += total;
      queue.push(total);
    }
    printf("%d\n", cost);
  }
  return 0;
}
