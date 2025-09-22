#include "libft.h"


bool ft_isalpha(char *estr)
{
	int	i;

	i = 0;
	while (estr[i])
	{
		if ((estr[i] <= 122 && estr[i] >= 97) || (estr[i] >= 65 && estr[i] <= 90))
			i++;
		else
			return 0;
	}
	return 1;
}

bool ft_isdigit(char *estr)
{
	if (estr[1]!=0)
		return 0;
	else if ((estr[0] - 48) >= 0 && (estr[0] - 48) <= 9)
		return 1;
	else
		return 0;
}
