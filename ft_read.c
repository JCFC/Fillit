/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 17:12:28 by jchen             #+#    #+#             */
/*   Updated: 2016/01/05 16:08:44 by jchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_freechain(t_ttms **lst)
{
	t_ttms		*tmp;

	while (*lst)
	{
		tmp = *lst;
		free((*lst)->pos);
		free((*lst)->size);
		*lst = (*lst)->next;
		free(tmp);
	}
}

static void		ft_ini(t_n *ini)
{
	ini->ret = 0;
	ini->incre = 0;
	ini->error = 1;
	ini->square = 0;
	ini->tetrimos = NULL;
}

static void		ft_start(int square, t_ttms *lst)
{
	int		tmp;
	int		size;
	char	*array;

	array = NULL;
	size = 0;
	square = square * 4;
	while (size * size < square && size * size != square)
		size++;
	tmp = size;
	if (tmp <= 3)
	{
		while (tmp != 4)
		{
			ft_shorten_ttms(lst);
			tmp++;
		}
	}
	else
	{
		tmp -= 4;
		while (tmp--)
			ft_extend_ttms(lst);
	}
	ft_test(lst, size, array, size);
}

void			ft_read(int fd)
{
	char	buf[BUF_SIZE + 1];
	t_n		var;

	ft_ini(&var);
	var.ret = read(fd, buf, BUF_SIZE);
	buf[var.ret] = '\0';
	if (var.ret < 10)
		var.error = 0;
	while (var.ret > 0 && var.error == 1)
	{
		if (var.ret <= 20 || (var.ret - 20) < 20)
		{
			var.error = ft_check_last_block(buf + var.incre, 21, &var.tetrimos);
			var.ret -= 20;
		}
		else
		{
			var.error = ft_check_block(buf + var.incre, 21, &var.tetrimos);
			var.incre += 21;
			var.ret -= 21;
		}
		var.square++;
	}
	var.error == 0 ? ft_putstr("error\n") : ft_start(var.square, var.tetrimos);
	ft_freechain(&var.tetrimos);
}
