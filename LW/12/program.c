#include <stdio.h>
#include <string.h> 
#include <math.h> 

int main() {
    int nulls = 0;
    float num_len = 0.0;
    char number[256], *pointer, input, num[128], new_num[128];
    memset(number, -1, sizeof(number));
    memset(num, -1, sizeof(num));
    memset(new_num, 0, sizeof(num));
    pointer = number;

    while ((input = getchar()) != EOF)
    {
        *pointer++ = input;
    }

    for(int i = 0; i < sizeof(number); i++) {
        if((int)number[i] == 49)
            break;
        nulls++;
    }

    for(int i = nulls; i < sizeof(number); i++) {
        if((int)number[i] == -1)
            break;
        num[i - nulls] = number[i];
        num_len = num_len + 1.0;
    }

    int mid = round(num_len / 2.0);

    for(int i = 0; i < mid; i++) {
        new_num[i] = num[i];
    }

    for(int i = 0; i < nulls; i++) {
        new_num[i + mid] = 48;
    }

    for(int i = mid; i < num_len; i++) {
        new_num[i + nulls] = num[i];
    }

    printf("\n%s", new_num);
    
    return 0;
}