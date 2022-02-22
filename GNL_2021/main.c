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
		while ((line = get_next_line(fd)) != NULL)
		{
			printf("%s\n", line);
			free(line);
			line = 0;
			i++;
		}
	else if (argc == 3)
	{
		printf("\t---------1er txt----------\n");
		while ((line = get_next_line(fd)) != NULL && i++ < 4)
		{
			printf("%s\n", line);
			free(line);
			line = 0;
		}
		i = 1;
		printf("\n\t---------2e txt----------\n");
		while ((line = get_next_line(fd)) != NULL && i++ < 4)
		{
			printf("%s\n", line);
			free(line);
			line = 0;
		}
		i = 1;
		printf("\n\t---------1er txt----------\n");
		while ((line = get_next_line(fdb)) > 0 && i++ < 4)
		{
			printf("%s\n", line);
			free(line);
			line = 0;
		}
	}
	if (argc < 4)
		close(fd);
	if (argc == 3)
		close(fdb);
}
