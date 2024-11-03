#include <stdio.h>

#define MAX(a,b) ((a) > (b) ? (a) : (b))

int main() {
    int t; 
    scanf("%d", &t);
    
    while(t--) {
        int n, k, ans = 0; 
        scanf("%d %d", &n, &k);
        
        for(int i = 1; i <= n; i++) {
            for(int j = i + 1; j <= n; j++) {
                if((i & j) < k) {
                    ans = MAX(ans, (i & j));
                }
            }
        }
        
        printf("%d\n", ans);
    }

    return 0;
}

