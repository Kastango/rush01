#include <stdio.h>

void	matrix_start(int *matrix)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		matrix[i] = 1;
		i++;
	}
}

void next_matrix(int *matrix, int pos,int *end)
{
	if (pos < 16){
		matrix[pos]++;
		if (matrix[pos] >= 5)
		{
			matrix[pos] = 1;
			next_matrix(matrix, ++pos, end);
		}
	}
	else
		end[0] = 1;

} 
/*
int main (void) {
	int matrix[16];
	int end[0];

	end[0] = 0;
	matrix_start(matrix);
	for(int i=0;i < 16; i++)
	{
		printf("%i ", matrix[i]);
	}
	printf("\n");
	while(1)
	{
		next_matrix(matrix, 0, end);
		for(int i=0;i < 16; i++)
		{
			printf("%i ", matrix[i]);
		}
		printf("\n");
		
		if(end[0] == 1)
		{
			printf(" (%i)\n", end[0]);
			return 0;
		}
	}	
}
*/
