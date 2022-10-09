#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	if (!(dst) || !(src))
		return (0);
	while (dst[i])
		i++;
	//inclure le size et tout bref utiliser son cerveau
	while (src[j] && i < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst));
}

int	main()
{
	return (0);
}
