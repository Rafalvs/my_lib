int my_isalpha(char key)
{
    if ((key >= 'A' && key <= 'Z') || (key >= 'a' && key <= 'z'))
    {
        return 1;
    }
    return 0;
}