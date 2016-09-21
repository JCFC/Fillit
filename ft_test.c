/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 13:16:00 by daltman           #+#    #+#             */
/*   Updated: 2015/12/17 13:16:39 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int					ft_test(t_ttms *lst, int nb, char *array, int tmp)
{
	int		all_pos;

	all_pos = (nb * (nb + 1));
	array = ft_array(nb, all_pos);
	if (ft_all(lst, array, 0, all_pos))
	{
		ft_putstr(array);
		free(array);
		return (1);
	}
	else
	{
		free(array);
		ft_extend_ttms(lst);
		ft_test(lst, nb + 1, array, tmp + 1);
	}
	return (0);
}
