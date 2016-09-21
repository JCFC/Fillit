/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 10:32:30 by daltman           #+#    #+#             */
/*   Updated: 2015/12/17 21:12:16 by jchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUF_SIZE 580

typedef struct	s_tab
{
	int			pos[76];
}				t_tab;

typedef struct	s_t
{
	int			*size;
	int			*pos;
	char		letter;
	struct s_t	*next;
}				t_ttms;

typedef struct	s_n
{
	int			square;
	int			incre;
	int			ret;
	int			error;
	t_ttms		*tetrimos;
}				t_n;

typedef struct	s_var
{
	int			pt;
	int			n;
	int			i;
	int			incre;
}				t_var;

void			*ft_memset(void *b, int c, int len);
int				ft_strlen(const char *str);
void			ft_putstr(const char *str);
void			ft_place_tetrimos2(char *array, int *ttms,
				char letter, int pos);
void			ft_shorten_ttms(t_ttms *lst);
int				ft_all(t_ttms *lst, char *array, int pos, int max);
int				*ft_spec_tetrimos(int *tab);
char			*ft_array(int nb, int max);
void			ft_put_nl(char *array, int nb);
void			ft_back2(char *array, int pos, int *lst);
int				ft_check2(char *array, int *ttms, int pos, int max);
void			ft_read(int fd);
int				ft_check_block(char *file, int caract, t_ttms **tetrimos);
int				ft_check_last_block(char *file, int caract, t_ttms **tetrimos);
int				ft_check_tetrimos(char *block, int caract, t_ttms **ttms);
void			ft_extend_ttms(t_ttms *lst);
int				ft_test(t_ttms *lst, int nb, char *array, int tmp);
void			ft_begin_lst(t_ttms **lst, int *ttms, char letter);
#endif
