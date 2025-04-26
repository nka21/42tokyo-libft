#include <ctype.h>

/**
 * 0~255
 * その値が10進数の数字かどうか
 * true: 0以外(ここでは1を返す)
 * false: 0
 */

int	ft_isdigit(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	return ('0' <= uc && uc <= '9');
}

int	main(void)
{
	return (0);
}
