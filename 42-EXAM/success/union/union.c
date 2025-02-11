/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:54:56 by ljeribha          #+#    #+#             */
/*   Updated: 2025/01/13 17:25:09 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    my_union(char *s1, char *s2)
{
        int     i = 0;
        int     j = 0;
        unsigned char   bit[265] = {0};

        while (s1[i])
        {
                if (!bit[s1[i]])
                {
                        write(1, &s1[i], 1);
                        bit[s1[i]] = 1;
                }
                i++;
        }
        while (s2[j])
        {
                if (!bit[s2[j]])
                {
                        write(1, &s2[j], 1);
                        bit[s2[j]] = 1;
                }
                j++;
        }
}

int     main(int ac, char **av)
{
        if (ac == 3)
        {
                my_union(av[1], av[2]);
        }
        write(1, "\n", 1);
        return (0);
}