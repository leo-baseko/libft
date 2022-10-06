#include "libft.h"

int	tolower(int a)
{
	if (a >= 'A' && a <= 'Z')
		return (a += 42);
	return (a);
}
