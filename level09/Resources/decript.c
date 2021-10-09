#include <stdio.h>

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
		return (1);
	i = -1;
	while(argv[1][++i])
	{
		argv[1][i] -= i;
	}
	printf("Token is: %s\n", argv[1]);
	return (0);
}


