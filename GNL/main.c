#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <limits.h>

int		main(int argc, char **argv)
{
	int		fd;
	int		fdb;
	char	*line;
	int		i;
	int		ret;

	line = NULL;
	if (argc == 1)
		fd = 0;
	else if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else if (argc == 3)
	{
		fd = open(argv[1], O_RDONLY);
		fdb = open(argv[2], O_RDONLY);
	}
	else
		return (2);
	i = 1;
	if (argc < 3)
		while ((ret = get_next_line(fd, &line)) > 0)
		{
			printf("%s\n", line);
			free(line);
			line = 0;
			i++;
		}
	else if (argc == 3)
	{
		printf("\t---------1er txt----------\n");
		while ((ret = get_next_line(fd, &line)) > 0 && i++ < 4)
		{
			printf("%s\n", line);
			free(line);
		}
		i = 1;
		printf("\n\t---------2e txt----------\n");
		while ((ret = get_next_line(fdb, &line)) > 0 && i++ < 4)
		{
			printf("%s\n", line);
			free(line);
		}
		i = 1;
		printf("\n\t---------1er txt----------\n");
		while ((ret = get_next_line(fd, &line)) > 0 && i++ < 4)
		{
			printf("%s\n", line);
			free(line);
		}
	}
	free(line);
	if (i == 1)
		printf("retour de gnl : %i\n", ret);
	if (argc < 4)
		close(fd);
	if (argc == 3)
		close(fdb);
}
