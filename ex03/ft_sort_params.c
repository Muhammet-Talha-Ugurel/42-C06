/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugurel <muhammedtalhaugurel@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 01:41:02 by mugurel           #+#    #+#             */
/*   Updated: 2022/10/25 04:11:06 by mugurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_sort_str_arg(char **tab, int size)
{
	char	*swap;
	int		arc;
	int		ltc;

	arc = 1;
	ltc = 0;
	while (arc < (size - 1))
	{
		if (tab[arc][ltc] == tab[arc + 1][ltc])
		{
			ltc++;
		}
		if (tab[arc][ltc] > tab[arc + 1][ltc])
		{
			swap = tab[arc];
			tab[arc] = tab[arc + 1];
			tab[arc + 1] = swap;
			arc = 1;
			ltc = 0;
		}
		else
			arc++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	ft_sort_str_arg(av, ac);
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
}
