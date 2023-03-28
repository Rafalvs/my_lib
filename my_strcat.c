char *my_strcat(char *dest, const char *src, size_t n)
{
    size_t dest_len = strlen(dest);
    size_t i;
    i = 0;

    while (i < n && src[i] != 0)
    {
        dest[dest_len + i] = src[i];
        dest[dest_len + i] = '\0';
        i++;
    }
    return dest;
}