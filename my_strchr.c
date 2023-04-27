#include <stdio.h>

char *my_strchr(const char *s, int c)
{
    char *r = (char *)s;
    int i;
    i = 0;

    while (r[i] != '\0')
    {
                    
        if (r[i] == c)
        {
            return (r + i);
        }
        i++;
    }
    return NULL;
}

/*
int main (void)
{
  const char str[] = "comediante";
  const char ch = 'a';
  char *ret;
  ret = strchr(str, ch);
  printf("|%c| - |%s|\n", ch, ret);

  return(0);
}
*/