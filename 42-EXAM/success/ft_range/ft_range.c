/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:29:39 by ljeribha          #+#    #+#             */
/*   Updated: 2025/02/03 18:06:29 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*range;
	int	i;
	int	size;

	if (start < end)
		size = end - start + 1;
	else
		size = start - end + 1;

	range = (int *)malloc(size * sizeof(int));
	if (!range)
		return (NULL);
	i = 0;
	if (start < end)
	{
		while (i < size)
		{
			range[i] = start + i;
			i++;
		}
	}
	else
	{
		while (i < size)
		{
			range[i] = start - i;
			i++;
		}
	}
	return (range);
}
