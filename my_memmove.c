void *my_memmove(void *dest, const void *src, size_t n)
{
    char *csrc = (char *)src;
    char *cdest = (char *)dest;
    char *temp = (char *)n;

    int i;
    i = 0;

    while (i < n)
    {
        temp[i] = csrc[i];
        i++;
    }
    i = 0;

    while (i < n)
    {
        cdest[i] = temp[i];
        i++;
    }
}