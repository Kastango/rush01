#include <unistd.h>
#include "skyscrapper_puzzle.h"

int validate_row(int *matrix);
int validate_colum(int *matrix);

int validate_matrix(int *matrix)
{
	int res;

	res = 0;
	
	res = validate_row(matrix);
	if (res != 0)
		res = validate_colum(matrix);

	return res;
}

int validate_row(int *matrix)
{
	int n[3];
	int aux;

	n[0] = 0;
	while (n[0] < 4)
	{
		while(n[1] < 4)
		{
			aux = matrix[n[0]+n[1]];
			n[2] = n[1]+1;
			while (n[2] < 4){
				if (aux == matrix[n[2]])
					return 1;
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
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
		while (n2 < 16)
		{
			invert[n] = matrix[n+n2];
			n2 += 4;
		}
		n++;
	} 
	aux = validate_row(invert);
	return aux;
}