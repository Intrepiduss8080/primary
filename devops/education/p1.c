#include <stdio.h>

void add(int *num)
{
    *num = *num + 10;
    printf("%d", *num);
}

int main()
{
    int x = 50;

    add(&x);

    printf("%d", x);
}