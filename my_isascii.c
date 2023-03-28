int my_isascii(char key)
{
    if (key >= 0 && key <= 127)
    {
        return 1;
    }
    return 0;
}