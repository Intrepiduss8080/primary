#include <stdio.h>

int main()
{
    int a = 199;

    int *p = &a;
    *p = a +1;


    printf("%p \n \n", &a);
    printf("%d", a);
}