/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 10:43:26 by daltman           #+#    #+#             */
/*   Updated: 2015/12/17 12:38:33 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_freechaincontent(t_ttms *lst)
{
	t_ttms	*tmp;

	while (lst)
	{
		tmp = lst;
		lst = lst->next;
		free(tmp->size);
		free(tmp->pos);
	}
}
