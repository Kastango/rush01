#include <unistd.h>
#include <stdio.h>
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_matrix(int *matrix)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		ft_putchar(matrix[i] + '0');
		if (i % 4 != 3)
			ft_putchar(' ');
		if (i % 4 == 3)
			ft_putchar('\n');
		i++;
	}
}

void vector_construct(int *vet1, int *vet2, int *vet3, int *vet4, int *res)
{
	int i = 0;

	while(i < 4)
	{
		res[i] = vet1[i];
		res[i+4] = vet2[i];
		res[i+8] = vet3[i];
		res[i+12] = vet4[i];
		i++;
	}

	//return(res);
}

int main(){
	int possibility[24][4] = {
		{4,2,3,1},{3,1,4,2},{3,4,2,1},{4,1,3,2},{1,4,2,3},{1,2,3,4},{4,3,1,2},{1,3,4,2},
		{2,1,3,4},{4,1,2,3},{1,2,4,3},{3,4,1,2},{1,3,2,4},{1,4,3,2},{4,2,1,3},{3,2,1,4},
		{2,1,4,3},{3,1,2,4},{2,3,1,4},{3,2,4,1},{2,4,1,3},{2,3,4,1},{4,3,2,1},{2,4,3,1}};

	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	int aux[16];
	vector_construct(possibility[i], possibility[j], possibility[k], possibility[l], aux);
	print_matrix(aux);

	while(i < 24){
		while(j < 24){
			while(k < 24){
				while(l < 24){
					printf("%i, %i, %i, %i\n", possibility[i][0], possibility[i][1], possibility[i][2], possibility[i][3]);
					printf("%i, %i, %i, %i\n", possibility[j][0], possibility[j][1], possibility[j][2], possibility[j][3]);
					printf("%i, %i, %i, %i\n", possibility[k][0], possibility[k][1], possibility[k][2], possibility[k][3]);
					printf("%i, %i, %i, %i\n", possibility[l][0], possibility[l][1], possibility[l][2], possibility[l][3]);
					printf("\n");
					l++;
				}
				l = k;
				k++;
			}
			k = j;
			j++;
		}
		j = i;
		i++;
	}
}
*/