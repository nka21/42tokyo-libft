#include <ctype.h>
#include <stdio.h>

/**
 * 0~255
 * その値が、アルファベットかどうか。
 * true: 0以外(ここでは1を返す)
 * false: 0
 */

int	ft_islower(unsigned char c)
{
	return ('a' <= c && c <= 'z');
}

int	ft_isupper(unsigned char c)
{
	return ('A' <= c && c <= 'Z');
}

int	ft_isalpha(int c)
{
	unsigned char	uc;

	if (c == EOF)
	{
		return (0);
	}
	uc = (unsigned char)c;
	return (ft_islower(uc) || ft_isupper(uc));
}

int	main(void)
{
	printf("%d\n", ft_isalpha(0x0f));
	printf("%d\n", isalpha(0x0f));
	return (0);
}
