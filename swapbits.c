#include <stdio.h>

unsigned int swap_adjacent_bits(unsigned int n) {
    unsigned int even_bits = n & 0xAAAAAAAA; // 101010...
    unsigned int odd_bits = n & 0x55555555;  // 010101...

    even_bits >>= 1;
    odd_bits <<= 1;

    return even_bits | odd_bits;
}

int main() {
    int t;
    scanf("%d", &t);

    while(t--){

    unsigned int n;
    scanf("%u", &n);

    unsigned int swapped = swap_adjacent_bits(n);
    printf("%u ", swapped);
  }
    return 0;
}

