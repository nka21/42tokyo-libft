#include <ctype.h>
#include <stdio.h>

int ft_islower(unsigned char c)
{
    return ('a' <= c && c <= 'z');
}

int ft_isupper(unsigned char c)
{
    return ('A' <= c && c <= 'Z');
}

int ft_isalpha(int c)
{
    if (c == EOF)
    {
        return (0);
    }

    unsigned char uc = (unsigned char)c;
    if (ft_islower(uc) || ft_isupper(uc))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int main(void)
{
    printf("%d\n", ft_isalpha('0x0f'));
    printf("%d\n", isalpha('0x0f'));
    return (0);
}