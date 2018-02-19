#include <stdio.h>
#include <vector>

using namespace std;

int main() {
  vector <int> a = {1,2,3,4,5,6,7,8,9,10};
  
  int b = 0;
  int c = 0;
  
  for(int i = 0; i < a.size(); i++) {
    printf("%d\n", a[i]);
    
    if(i == 0) {
      b = a[i];
      
      a[i] = a[a.size() - 1];
    } else if(i < a.size()){
      c = a[i];
      
      a[i] = b;
      
      b = c;
    }
  }
  
  printf("--------------------\n");
  
  for(int i = 0; i < a.size(); i++) {
    printf("%d\n", a[i]);
  }
}
