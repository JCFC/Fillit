/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extend_ttms.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 13:19:47 by daltman           #+#    #+#             */
/*   Updated: 2015/12/17 13:19:49 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	void		ft_push(int *ttms, int *incre)
{
	int		i;

	i = 0;
	while (i != 4)
	{
		ttms[i] = ttms[i] + incre[i];
		i++;
	}
}

void				ft_extend_ttms(t_ttms *lst)
{
	while (lst)
	{
		ft_push(lst->pos, lst->size);
		lst = lst->next;
	}
}
