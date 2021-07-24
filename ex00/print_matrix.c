/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 01:52:18 by arbernar          #+#    #+#             */
/*   Updated: 2021/07/24 17:40:53 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "skyscrapper_puzzle.h"

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
