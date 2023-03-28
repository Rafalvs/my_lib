int my_isprint(char key)
{
    if (key >= 32 && key <= 126)
    {
        return 1;
    }
    return 0;
}