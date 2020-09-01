
#include <unistd.h>

int	main(int argc, char **argv)
{	
	int l = 0;
	if (argc == 2)
	{
		while(*argv[1])
		{
			l++;
			argv[1]++;
		}
		while (l + 1 != 0)
		{
			write(1, argv[1], 1);
			argv[1]--;
			l--;
		}
	}
	write(1, "\n", 1);
	return (0);
}

