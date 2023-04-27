void *my_calloc(size_t nmemb, size_t size)
{
    void *ret;
    char *temp;
    size_t idx;
    idx = 0;
    ret = malloc(nmemb * size);
    temp = (char *)ret;

    while(idx < nmemb * size)
    {
        *temp = 0;
        idx++;
        temp++;
    }
    return (ret);
}

/*
int main(void)
{
    long int *ptr;
    ptr = calloc(4000, sizeof(long int))
}
*/