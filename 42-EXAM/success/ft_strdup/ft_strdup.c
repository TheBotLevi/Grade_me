/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:25:04 by ljeribha          #+#    #+#             */
/*   Updated: 2024/12/17 11:12:00 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	int	len;
	char	*save;

	i = 0;
	len = ft_strlen(src);
	save = malloc(sizeof(char) * len + 1);
	while (src[i])
	{
		save[i] = src[i];
		i++;
	}
	save[i] = '\0';
	return (save);
}