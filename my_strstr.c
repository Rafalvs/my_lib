char *my_strchr(const char *s, int c)
{
    
    int i;
    i = 0;

    while (i != '\0')
    {
        if (*s[i] == c)
        {
        return s;
        }
        if (!*s)
        return NULL;
    }
    return NULL;
}