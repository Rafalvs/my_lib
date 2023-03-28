#include "my_memcmp.c"
#include <stdio.h>

int main(void)
{
    char lacto[10] = "pai";
    char bacilo[10] = "filho1984";

    int result;
    result = my_memcmp(lacto, bacilo, 4);

    if (result == 0)
        printf("resultado nu\n");
    else
        printf("%d\n", result);
}