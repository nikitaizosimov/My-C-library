
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int l = 0;
    char *s;
    
    while (src[l])
    {
        l++;
    }
    if (!(s = (char *)malloc(sizeof(char) * (l + 1))))
        return (NULL);
    s[l] = '\0';
    while (l >= 0)
    {
        s[l] = src[l];
        l--;
    }
    return (s);
}
