void *my_memcpy(void *dest, const void *src, size_t n)
{
    char *csrc = (char *)src;
    char *cdest = (char *)dest;
    int i;
    i = 0;

    while (i < n)
    {
        cdest[i] = csrc[i];
        i++;
    }
}