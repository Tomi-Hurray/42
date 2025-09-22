#include "libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	if(argc > 1)
	{
		ft_isalpha(argv[1]);
		printf("isalpha: %d\n", ft_isalpha(argv[1]));
		ft_isdigit(argv[1]);
		printf("isdigit: %d\n", ft_isdigit(argv[1]));
	}
	else
		return 0;

}
