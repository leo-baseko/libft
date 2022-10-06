#include "libft.h"

int	toupper(int a)
{
	if (a >= 'a' && a <= 'z')
		return (a -= 42);
	return (a);
}
