/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:26:49 by ljeribha          #+#    #+#             */
/*   Updated: 2025/01/17 16:27:15 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
        if (nb > 9)
                ft_putnbr(nb / 10);
        char result = nb % 10 + '0';
        write(1, &result, 1);
}

int ft_atoi(char *str)
{
        int i = 0;
        int sign = 1;
        int n = 0;

        while(str[i] < 32)
                i++;
        if (str[i] == '-')
        {
                sign = -1;
                i++;
        }
        else if (str[i] == '+')
                i++;
        while(str[i] >= '0' && str[i] <= '9')
        {
                n = n * 10 + (str[i] - '0');
                i++;
        }
        return (n * sign);
}

int main(int ac, char **av)
{
        int i = 1;
        if (ac != 2)
                write(1, "\n", 1);
        else
        {
                int nb1 = ft_atoi(av[1]);
                while (i <= 9)
                {
                        ft_putnbr(i);
                        write(1, " x ", 3);
                        ft_putnbr(nb1);
                        write(1, " = ", 3);
                        ft_putnbr(i * nb1);
                        write(1, "\n", 1);
                        i++;
                }
        }
        return (0);
}

