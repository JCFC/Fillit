/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_back2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 13:13:26 by daltman           #+#    #+#             */
/*   Updated: 2015/12/17 13:13:28 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void			ft_back2(char *array, int pos, int *lst)
{
	int		i;

	i = 0;
	while (i != 4)
	{
		array[pos] = '.';
		pos = pos + (lst[i + 1] - lst[i]);
		i++;
	}
}
