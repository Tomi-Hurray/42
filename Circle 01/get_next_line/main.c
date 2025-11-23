#include <stdio.h>
#include "get_next_line.h"

int main()
{
	int fd = open("kotek.txt", O_RDONLY);
	printf("%s",get_next_line(fd));
	return (0);
}
