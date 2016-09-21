/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shorten_ttms.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 13:21:01 by daltman           #+#    #+#             */
/*   Updated: 2015/12/17 13:21:02 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_shorten_ttms(t_ttms *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		while (i != 4)
		{
			lst->pos[i] = lst->pos[i] - lst->size[i];
			i++;
		}
		i = 0;
		lst = lst->next;
	}
}
