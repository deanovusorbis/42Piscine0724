char    *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if(str[i] >= 65 && str[i] <= 990)
        {
            str[i] += '32';
        }
        i++;
    }
}