# Отчёт по лабораторной работе №13

---

## по курсу "Фундаментальная информатика"


Студент группы М8О-108Б-23 Иванов Никита Егорович

Работа выполнена

Преподаватель: каф.806 Севастьянов Виктор Сергеевич

1. Тема: Множества
2. Цель работы: составить программу проверки характеристик введённых последовательностей слов и печати развёрнутого ответа.
3. Задание: Вариант 15
   Есть ли два соседних слова, гласные(согласные) в которых совпадают?
4. Идея, метод, алгоритм решения задачи: 
- не использовать советы из текста лабы и сделать всё самому;
- придумать программу на основе опыта из Python;
- написать кучу функций, делающих программирование приятным;
- понять, что для каждого массива нужно писать функцию отдельно;
- написать все функции и сделать выполнение программы возможным;
- преобразовать все буквы в их ASCII-коды и проверить на этой основе наличие/отсутствие букв;
- все ненайденные ASCII-коды преобразовать обратно в буквы и вывести на экран.
5. Сценарий выполнения работы: 
Понадобятся многострадальные тесты:

|Входные данные                                |Выходные данные|
|----------------------------------------------|---------------|
|YEA NOPE                                      |YEA            |
|I’VE ALWAYS WANTED TO BE A GIANT SPACE CRAB.  |YEA            |
|ABC EFG HIJ                                   |NOPE           |

6. Протокол: 
```c
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
```
8. Выводы: Работа является очень важной, так как написание этой программы позволит писать программы на С с использованием методов работы с битами.