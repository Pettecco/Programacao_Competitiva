#include <stdio.h>

unsigned int reverse_bits(unsigned int n){
  unsigned int reversed = 0;
  int bit_count = sizeof(n) * 8;

  for(int i = 0; i < bit_count; i++){
    unsigned int bit = (n >> i) & 1;
    
    reversed |= (bit << (bit_count - 1 - i));
  }

  return reversed;
}

int main(){
  int t;
  scanf("%d", &t);
  unsigned int n;
  for(int i = 0; i < t; i++){
    scanf("%u", &n);
    printf("%u\n", reverse_bits(n));
  }
  return 0;
}
