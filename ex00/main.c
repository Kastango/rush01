#include <unistd.h>
#include "skyscrapper_puzzle.h"

int * vector_construct(int *vet1, int *vet2, int *vet3, int *vet4)
{
	int i;
	static int res[16];

	i = 0;
	while(i < 4)
	{
		res[i] = vet1[i];
		res[i+4] = vet2[i];
		res[i+8] = vet3[i];
		res[i+12] = vet4[i];
		i++;
	}

	return res;
}

int matrix_solver(int *matrix, int *view){
	int p[24][4] = {
		{4,2,3,1},{3,1,4,2},{3,4,2,1},{4,1,3,2},{1,4,2,3},{1,2,3,4},{4,3,1,2},{1,3,4,2},
		{2,1,3,4},{4,1,2,3},{1,2,4,3},{3,4,1,2},{1,3,2,4},{1,4,3,2},{4,2,1,3},{3,2,1,4},
		{2,1,4,3},{3,1,2,4},{2,3,1,4},{3,2,4,1},{2,4,1,3},{2,3,4,1},{4,3,2,1},{2,4,3,1}};

	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int *aux;

	while(i < 24){
		while(j < 24){
			while(k < 24){
				while(l < 24){
					aux = vector_construct(p[i], p[j], p[k], p[l]);
					if(validate_column(aux)){
						if(validate_view(aux, view)){
							print_matrix(aux);
							return (0);
						}
					}
					l++;
				}
				l = 0;
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
	return(1);
}

int	main(int argc, char *argv[])
{
	int	matrix[16];
	int	views[16];
	int	entry;

	entry = validate_entry(argv[1], views);
	if (argc == 2 && entry == 0)
	{
		matrix_start(matrix);
		matrix_solver(matrix, views);
	}
	else
		write(1, "Error\n", 6);

	return(0);
}

//comando para iniciar: ./a.out "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"