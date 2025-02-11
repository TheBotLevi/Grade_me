/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:32:27 by ljeribha          #+#    #+#             */
/*   Updated: 2024/12/10 15:37:13 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			count = s[i] - 'a' + 1;
		else if (s[i] >= 'A' && s[i] <= 'Z')
			count = s[i] - 'A' + 1;
		else
			count = 1;
		while (count--)
		{
			write(1, &s[i], 1);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		repeat_alpha(av[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}