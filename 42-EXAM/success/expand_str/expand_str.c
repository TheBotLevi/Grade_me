/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:34:15 by ljeribha          #+#    #+#             */
/*   Updated: 2025/01/13 17:44:41 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    expand_str(char *str)
{
        char    flag;
        int             i;

        i = 0;
        flag = 0;
        while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
                i++;
        while (str[i])
        {
                if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
                        flag += 1;
                else
                {
                        if (flag)
                                write (1, "   ", 3);
                        flag = 0;
                        write(1, &str[i], 1);
                }
                i++;
        }
}

int     main(int ac, char **av)
{
        if (ac == 2)
        {
                expand_str(av[1]);
        }
        write(1, "\n", 1);
        return (0);
}