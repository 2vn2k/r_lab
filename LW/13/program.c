#include <stdio.h>
#include <string.h>
#include <stdbool.h> 

bool int_in_array(int ch, int arr[], int size) {
    for(int i = 0; i < size; i++)
        if(arr[i] == ch)
            return true;
    return false;
}

bool char_in_array(char ch, char arr[]) {
    for(int i = 0; i < sizeof(arr); i++)
        if(arr[i] == ch)
            return true;
    return false;
}

void test(char arr[]) {
    for(int i = 0; i < sizeof(arr); i++)
        printf("%d ", (int)arr[i]);
    printf("\n");
}

int main() {
    int vowels[] = {65, 69, 73, 79, 85, 89};
    int consonants[] = {66, 67, 68, 70, 71, 72, 74, 75, 76, 77, 78, 80, 81, 82, 83, 84, 86, 87, 88, 90};
    int sep[] = {-1, 9, 10, 32, 44};

    bool vowel, consonant;
    const int buff_size = 8;
    char input, buff[2][2][buff_size], word[buff_size];
    memset(buff[1][0], -1, buff_size);
    memset(buff[1][1], -1, buff_size);

    while (true)
    {

        int v = 0, c = 0, w = 0;
        vowel = false, consonant = false;
        memset(buff[0][0], -1, buff_size);
        memset(buff[0][1], -1, buff_size);
        memset(word, 0, buff_size);
        
        while (!int_in_array((int)(input = getchar()), sep, sizeof(sep) / sizeof(sep[0])))
        {
            if(int_in_array((int)input, vowels, sizeof(vowels) / sizeof(vowels[0]))) {
                buff[0][0][v] = input;
                v++;
            }
            if(int_in_array((int)input, consonants, sizeof(consonants) / sizeof(consonants[0]))) {
                buff[0][1][c] = input;
                c++;
            }
            word[w] = input;
            w++;
        }
        for(int i = 0; i < buff_size; i++) {
            if(char_in_array(word[i], buff[1][0]) && int_in_array((int)word[i], vowels, sizeof(vowels) / sizeof(vowels[0])))
                vowel = true;
            if(char_in_array(word[i], buff[1][1]) && int_in_array((int)word[i], consonants, sizeof(consonants) / sizeof(consonants[0])))
                consonant = true;
        }

        if(vowel || consonant || input == EOF)
            break;

        for(int i = 0; i < buff_size; i++)
            buff[1][0][i] = buff[0][0][i];
        for(int i = 0; i < buff_size; i++)
            buff[1][1][i] = buff[0][1][i];
    }

    if(vowel || consonant)
        printf("\nYEA");
    else
        printf("\nNOPE");

    return 0;
}