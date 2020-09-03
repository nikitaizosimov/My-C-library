char        *ft_strrev(char *str)
{
    int i = 0;
    int l = 0;
    char temp;

    while(str[l])
    {
        l++;
    }
    while (l - 1 > i)
    {
        temp = str[l - 1];
        str[l - 1] = str[i];
        str[i] = temp;
        l--;
        i++;
    }
    return (str);
}
