#include <stdio.h>
#include <stdbool.h> 

bool isBitSet(int n, int i) {
    return (n & (1 << i)) != 0;  
}

int main() {
    int n, i;
    scanf("%d %d", &n, &i);
    bool ans = isBitSet(n, i);
    
    if (ans) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}

