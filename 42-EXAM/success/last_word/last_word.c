/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:50:46 by ljeribha          #+#    #+#             */
/*   Updated: 2024/12/04 12:37:44 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (str[i] == ' ' || str[i] == '\t')
		i--;
	while (str[i] > 32 && str[i] < 127)
		i--;
	i++;
	while (str[i] > 32 && str[i] < 127)
	{
		write(1, &str[i],1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		last_word(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
