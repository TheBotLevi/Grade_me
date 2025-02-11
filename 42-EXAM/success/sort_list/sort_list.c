/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:46:30 by ljeribha          #+#    #+#             */
/*   Updated: 2025/01/13 18:10:43 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

t_list  *sort_list(t_list* lst, int (*cmp)(int, int))
{
        int     swap;
        t_list  *start;

        start = lst;
        while (lst != NULL && lst->next != NULL)
        {
                if ((*cmp)(lst->data, lst->next->data) == 0)
                {
                        swap = lst->data;
                        lst->data = lst->next->data;
                        lst->next->data = swap;
                        lst = start;
                }
                else
                        lst = lst->next;
        }
        return (start);
}