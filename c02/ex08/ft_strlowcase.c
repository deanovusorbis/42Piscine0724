char    *ft_strlowcase(char *str);
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if(str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= '32';
        }
        i++;
    }
}