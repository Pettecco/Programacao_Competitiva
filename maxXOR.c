#include <stdio.h>

#define MAX(a,b) ((a) > (b) ? (a) : (b))

int main(){
  int l, r;
  scanf("%d %d", &l, &r);
  
  int ans = 0;
  for(int i = l; i <= r; i++){
    for(int j = i; j <= r; j++){
      ans = MAX(ans, (i^j));
    }
  }

  printf("%d\n", ans);
  
  return 0;
}
