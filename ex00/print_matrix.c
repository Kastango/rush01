/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 01:52:18 by arbernar          #+#    #+#             */
/*   Updated: 2021/07/24 02:59:44 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_matrix(int *matrix)
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

void matrix_start(int *matrix)
{
	int i;

	i = 0;
	while(i < 16){
		matrix[i] = 0;
		i++;
	}
}

int main(int argc, char *argv[])
{
	int matrix[16];


	if(argc == 2){
		matrix_start(matrix);
		//solucao
		print_matrix(matrix);
	}else
		write(1, "Error\n", 6);
	
}

//comando para iniciar: ./a.out "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"