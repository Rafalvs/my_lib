int *my_toupper(char *c, size_t n)
{
    int i;
    i = 0;

    while (i < n && c[i] != '\0')
    {
        if (c[i] >= 'a' && c[i] <= 'z')
        {
            c[i] = c[i] - 'a' + 'A';
        }
        else if (c[i] >= 'A' && c[i] <= 'Z' || c[i] >= '0' && c[i] <= '9')
        {
            c[i] = c[i];
        }

        i++;
    }
}
