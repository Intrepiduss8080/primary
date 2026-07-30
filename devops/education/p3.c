#include <stdio.h>

int main(){
    int a = 10;

    int *p = &a;
    int **pp = &p;

    printf("Адрес_1: %p \n", p);
    printf("Адрес_2 %p \n", pp); 

    printf("Значение_1: %d \n", *p);
    printf("Значение_11: %d \n", **pp);
}