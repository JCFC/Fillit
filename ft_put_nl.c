/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 21:00:17 by jchen             #+#    #+#             */
/*   Updated: 2015/12/17 21:00:19 by jchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void			ft_put_nl(char *array, int nb)
{
	int		tmp;
	int		i;

	i = 0;
	tmp = nb;
	while (array[i])
	{
		if (i == tmp - 1)
		{
			array[i] = '\n';
			nb = nb + tmp + -1;
		}
		else if (i == nb)
		{
			array[i] = '\n';
			nb = nb + tmp;
		}
		i++;
	}
}
