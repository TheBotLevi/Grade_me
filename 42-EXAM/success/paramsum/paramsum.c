/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:11:42 by ljeribha          #+#    #+#             */
/*   Updated: 2024/11/25 18:44:52 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int c)
{
	if (c > 9)
	{
		putnbr(c / 10);
		putnbr(c % 10);
	}
	else
	{
		ft_putchar(c + '0');
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "0", 1);
		write(1, "\n", 1);
	}
	if (argc > 1)
	{
		putnbr(argc - 1);
		write(1, "\n", 1);
	}
	return (0);
}