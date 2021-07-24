/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 01:52:18 by arbernar          #+#    #+#             */
/*   Updated: 2021/07/24 14:12:28 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

void	matrix_start(int *matrix)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		matrix[i] = 0;
		i++;
	}
}

int	validate_entry(char *str, int *views)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (str[i] != '\0' && j < 16)
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			views[j] = str[i] - '0';
			j++;
		}
		else
			if (str[i] != ' ')
				return (1);
		i++;
	}
	return (0);
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
		print_matrix(matrix);
	}
	else
		write(1, "Error\n", 6);
}

//comando para iniciar: ./a.out "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"