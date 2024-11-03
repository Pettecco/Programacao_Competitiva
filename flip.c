#include <stdio.h>

int main(){

  unsigned int n;
  int q;
  
  scanf("%d", &q);
  while(q--){
    scanf("%u", &n);
    printf("%u\n", (~n));
  }

  return 0; 
}
