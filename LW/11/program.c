#include <stdio.h>
#include <string.h> 

#define INT_MAX 13

int main() {
    char output[256], *pointer, input, buff[16];
    memset(output, 0, sizeof(output));
    pointer = output;

    while ((input = getchar()) != EOF)
    {
        int i = 0, n = 0;
        memset(buff, 0, sizeof(buff));
        while ((int)input > 47 && (int)input < 58)
        {
            buff[i] = input;

            input = getchar();
            i++;
        }

        sscanf(buff, "%d", &n);
        if(n <= INT_MAX)
            for(int j = 0; j < sizeof(buff); j++)
                if(buff[j] > 0)
                    *pointer++ = buff[j];

        if(input != EOF)
            *pointer++ = input;
    }

    printf("\n%s", output);
    
    return 0;
}