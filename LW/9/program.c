#include <stdio.h>
#include <math.h>

#define min(a,b) (a < b ? a : b)
#define max(a,b) (a > b ? a : b)

int main() {
    int i, j, l, k, ik, jk, lk;
    ik = 7;
    jk = -4;
    lk = -10;
    k = 1;

    while(
        (pow(ik + 10, 2) + pow(jk + 10, 2) > 100) && 
        (pow(ik + 20, 2) + pow(jk + 20, 2) > 100)
    ) {
        i = max((47 * ik) % 25, min((47 * jk) % 30, (47 * lk) % 30)) - k % 15;
        j = min(max((47 * ik) % 25, (47 * jk) % 25), (47 * lk) % 30) + k % 5;
        l = (47 * ik * jk * lk) % 25 + k % 5;
        ik = i, jk = j, lk = l;
        k++;
        if(k > 50) {
            printf("The point did not hit the hole, which is the intersection of two circles.");
            return 0;
        }
    }

    printf("The point hit the hole, which is the intersection of two circles in %d cycles.\n", k);
    printf("i: %d\n", ik);
    printf("j: %d\n", jk);
    printf("l: %d\n", lk);
    
    return 0;
}