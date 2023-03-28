#include "my_memchr.c"
#include <stdio.h>

int main(void)
{
    char *lacto;
    lacto = "bacilo";
    char *result;
    result = my_memchr(lacto, 'x', 3);
    
    if (result == NULL)
        printf("resultado nulo\n");
    else
        printf("%s\n", result);
}