/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetrimos.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 10:42:24 by daltman           #+#    #+#             */
/*   Updated: 2015/12/17 14:01:08 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tab g_pos = {.pos[0] = 0, .pos[1] = 1, .pos[2] = 2, .pos[3] = 7,
	.pos[4] = 0, .pos[5] = 5, .pos[6] = 9, .pos[7] = 10,
	.pos[8] = 0, .pos[9] = 5, .pos[10] = 6, .pos[11] = 7,
	.pos[12] = 0, .pos[13] = 1, .pos[14] = 5, .pos[15] = 10,
	.pos[16] = 0, .pos[17] = 1, .pos[18] = 2, .pos[19] = 6,
	.pos[20] = 0, .pos[21] = 4, .pos[22] = 5, .pos[23] = 10,
	.pos[24] = 0, .pos[25] = 4, .pos[26] = 5, .pos[27] = 6,
	.pos[28] = 0, .pos[29] = 5, .pos[30] = 6, .pos[31] = 10,
	.pos[32] = 0, .pos[33] = 1, .pos[34] = 2, .pos[35] = 5,
	.pos[36] = 0, .pos[37] = 1, .pos[38] = 6, .pos[39] = 11,
	.pos[40] = 0, .pos[41] = 3, .pos[42] = 4, .pos[43] = 5,
	.pos[44] = 0, .pos[45] = 5, .pos[46] = 10, .pos[47] = 11,
	.pos[48] = 0, .pos[49] = 1, .pos[50] = 4, .pos[51] = 5,
	.pos[52] = 0, .pos[53] = 5, .pos[54] = 6, .pos[55] = 11,
	.pos[56] = 0, .pos[57] = 1, .pos[58] = 6, .pos[59] = 7,
	.pos[60] = 0, .pos[61] = 4, .pos[62] = 5, .pos[63] = 9,
	.pos[64] = 0, .pos[65] = 1, .pos[66] = 2, .pos[67] = 3,
	.pos[68] = 0, .pos[69] = 5, .pos[70] = 10, .pos[71] = 15,
	.pos[72] = 0, .pos[73] = 1, .pos[74] = 5, .pos[75] = 6};

static	int			ft_check_letter(char letter)
{
	if (letter > '[')
		return (0);
	return (1);
}

static	int			ft_first(int *tab, t_ttms **ttms)
{
	int			count;
	int			i;
	static char	letter;

	if (!letter)
		letter = 'A';
	count = 0;
	i = 0;
	while (i != 76)
	{
		if (tab[count] == g_pos.pos[i])
		{
			count++;
			if (count == 4)
			{
				ft_begin_lst(ttms, tab, letter);
				letter++;
				return (ft_check_letter(letter));
			}
		}
		else if (tab[count] != g_pos.pos[i])
			count = 0;
		i++;
	}
	return (0);
}

int					ft_check_tetrimos(char *block, int caract, t_ttms **ttms)
{
	int			*tetrimos;
	int			count;
	int			i;

	i = 0;
	count = 0;
	tetrimos = (int*)malloc(sizeof(int) * 4);
	while (caract-- && *block != '\0')
	{
		if (*block == '#')
		{
			tetrimos[count] = i;
			count++;
			i++;
		}
		else if (i > 0)
			i++;
		block++;
	}
	if (count == 4)
		return (ft_first(tetrimos, ttms));
	else
		return (0);
}
