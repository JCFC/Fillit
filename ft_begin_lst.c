/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_begin_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 13:58:45 by daltman           #+#    #+#             */
/*   Updated: 2015/12/17 13:58:49 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_ttms	*ft_create_lst(int *pos, char letter, int *size)
{
	t_ttms		*tmp;

	tmp = (t_ttms*)malloc(sizeof(t_ttms));
	if (!tmp)
		return (NULL);
	else
	{
		tmp->pos = pos;
		tmp->size = size;
		tmp->letter = letter;
		tmp->next = NULL;
	}
	return (tmp);
}

static void		ft_push_lst(t_ttms **lst, int *pos, char letter, int *size)
{
	t_ttms		*tmp;
	t_ttms		*push_list;

	tmp = ft_create_lst(pos, letter, size);
	if (*lst == NULL)
		*lst = tmp;
	else
	{
		push_list = *lst;
		while (push_list->next != NULL)
			push_list = push_list->next;
		push_list->next = tmp;
	}
}

void			ft_begin_lst(t_ttms **lst, int *ttms, char letter)
{
	ft_push_lst(lst, ttms, letter, ft_spec_tetrimos(ttms));
}
