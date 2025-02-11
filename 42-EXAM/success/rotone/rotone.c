/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:41:05 by ljeribha          #+#    #+#             */
/*   Updated: 2025/01/13 16:52:59 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    rotone(char *str)
{
        int     i = 0;
        while (str[i])
        {
                if ((str[i] >= 'A' && str[i] <= 'Y') || (str[i] >= 'a' && str[i] <= 'y'))
                {
                        str[i] += 1;
                }
                else if (str[i] == 'Z' || str[i] == 'z')
                {
                        str[i] -= 25;
                }
                write(1, &str[i], 1);
                i++;
        }
}

int     main(int ac, char **av)
{
        if (ac == 2)
        {
                rotone(av[1]);
        }
        write(1, "\n", 1);
        return (0);
}