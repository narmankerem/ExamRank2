#include <unistd.h>

int	main(int argc, char *argv[])
{
	int len = 0;

	if (argc == 2)
	{
		while (argv[1][len])
			len++;
		while (len)
			write(1, &argv[1][--len], 1);
	}
	write(1, "\n", 1);
	return (0);
}