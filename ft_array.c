/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 13:03:38 by daltman           #+#    #+#             */
/*   Updated: 2015/12/17 21:05:45 by jchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char			*ft_array(int nb, int max)
{
	int		i;
	char	*array;

	i = 0;
	array = (char*)malloc(sizeof(char) * max);
	ft_memset(array, '.', max);
	array[max] = '\0';
	ft_put_nl(array, nb + 1);
	return (array);
}
