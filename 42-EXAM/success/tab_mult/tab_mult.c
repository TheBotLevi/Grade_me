/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:25:24 by ljeribha          #+#    #+#             */
/*   Updated: 2025/02/04 09:46:19 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	putnbr(int nb)
{
	char	str[10] = "0123456789";

	if (nb > 9)
		putnbr(nb / 10);
	write(1, &str[nb % 10], 1);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (sign * res);
}

int	main(int ac, char **av)
{
	int	i;
	int	nbr;

	i = 1;
	if (ac == 2)
	{
		nbr = ft_atoi(av[1]);
		while (i < 10)
		{
			putnbr(i);
			write(1, " x ", 3);
			putnbr(nbr);
			write(1, " = ", 3);
			putnbr(i * nbr);
			i++;
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
