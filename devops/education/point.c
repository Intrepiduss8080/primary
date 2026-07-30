#include <stdio.h>

int main()
{
    int p = 10;
    int *x = &p;

    char J[] = "Hello world";
    char *JJ = &J[0];

    printf("%d \n",x);
    printf("%s", JJ);
}