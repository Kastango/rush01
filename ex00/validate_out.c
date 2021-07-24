#include <unistd.h>
#include "skyscrapper_puzzle.h"

int validate_row(int *matrix);
int validate_colum(int *matrix);

int validate_matrix(int *matrix)
{
	int res;

	res = 0;
	res += validate_row(matrix);
	res += validate_colum(matrix);
	return res;
}

int validate_row(int *matrix)
{
	int n;
	int n2;
	int aux;

	n = 0;
	while(n < 4)
	{
		aux = matrix[n];
		n2 = n+1
		while (n2 < 4){
			if (aux == matrix[n2])
				return 1;
			n2++;
		}
		n++;
	}
	return 0;
}

int validate_colum(int *matrix)
{
	int n;
	int n2;
	int invert[16];
	int aux;

	n = 0;
	while (n < 4)
	{
		n2 = 0;
		while (n2 <4)
		{
			invert[n] = matrix[n+n2*4];
		}
	} 
	aux = validate_row(invert)
	return aux;
}