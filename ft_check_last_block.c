/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_last_block.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 13:33:27 by daltman           #+#    #+#             */
/*   Updated: 2015/12/17 13:34:05 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	void	ft_ini_var(t_var *tmp)
{
	tmp->pt = 0;
	tmp->n = 0;
	tmp->i = 0;
	tmp->incre = 0;
}

static	int		*ft_tabn(void)
{
	int		*tabn;

	tabn = (int*)malloc(sizeof(int) * 5);
	tabn[0] = 4;
	tabn[1] = 9;
	tabn[2] = 14;
	tabn[3] = 19;
	tabn[4] = 20;
	return (tabn);
}

int				ft_check_last_block(char *file, int caract, t_ttms **tetrimos)
{
	int		*tabn;
	t_var	variable;

	tabn = ft_tabn();
	ft_ini_var(&variable);
	while (caract && file[variable.i] != '\0')
	{
		if (file[variable.i] == '.')
			variable.pt++;
		else if (file[variable.i] == '\n')
		{
			variable.n++;
			variable.incre++;
		}
		variable.i++;
		caract--;
	}
	free(tabn);
	if (variable.n == 4 && variable.pt == 12)
		return (ft_check_tetrimos(file, 20, tetrimos));
	else
		return (0);
}
