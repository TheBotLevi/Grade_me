/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:12:33 by ljeribha          #+#    #+#             */
/*   Updated: 2024/12/17 11:33:08 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	nlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

char	*ft_itoa(int nbr)
{
	int	i;
	int	len;
	char	*save;

	i = 0;
	len = nlen(nbr);
	if (nbr < 0)
		i++;
	len = len + i;
	save = (char *)malloc(sizeof(char) * (len + 1));
	save[0] = '-';
	save[len] = '\0';
	while ((len - 1) >= i)
	{
		save[len - 1] = ft_abs(nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (save);
}