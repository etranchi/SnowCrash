#include <string.h>
#include <stdio.h>

int	main(int ac, char **av) {
	if (ac != 2)
		return (0);
	int i = -1;
	int len = strlen(av[1]);
	while (++i < len) {
		av[1][i] -= i;
	}
	printf("%s\n", av[1]);
	return (0);
}
