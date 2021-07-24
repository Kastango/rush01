#include <unistd.h>
#include "skyscrapper_puzzle.h"

int	main(int argc, char *argv[])
{
	int	matrix[16];
	int	views[16];
	int	entry;

	entry = validate_entry(argv[1], views);
	if (argc == 2 && entry == 0)
	{
		matrix_start(matrix);
		print_matrix(matrix);
	}
	else
		write(1, "Error\n", 6);
}

//comando para iniciar: ./a.out "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"