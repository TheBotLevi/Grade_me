/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 08:52:21 by ljeribha          #+#    #+#             */
/*   Updated: 2024/12/06 09:30:02 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	int	i;
	int	result;
	int	count;

	result = 0;
	i = 0;
	count = 0;
	if (len > 0)
	{
		while (count < len)
		{
			if (tab[i] > result)
			{
				result = tab[i];
			}
			i++;
			count++;
		}
		return (result);
	}
	return (0);
}