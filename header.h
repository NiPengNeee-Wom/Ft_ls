/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 15:21:55 by yplag             #+#    #+#             */
/*   Updated: 2015/02/15 15:21:56 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define FLAG_E(x, y) { fail("ls: "); fail(x); failn(y); exit(0); }
# define VOID_ERROR(x,y) { ft_putstr(x); ft_putstr(": "); perror(y); return ; }
# define INT_ERROR(x) { perror(x); return (-1); }
# define NSF_ERROR(x, y) { ft_putstr("ls: "); ft_putstr(x); ft_putendl(y); }
# define PER_ERROR(x, y) { ft_putstr("ls: ");ft_putstr(x);ft_putendl(y); }
# define PUT_DATE(x) { ft_putstr(" "); ft_putstr(x); ft_putstr(" "); }
# define PUT_NAME(x) { ft_putstr("\n");ft_putstr(x);ft_putendl(":"); }
# define PUT_NBR_STR(x, y) { ft_putnbr(x); ft_putstr(y); }
# include "libft/inc/libft.h"
# include <time.h>
# include <sys/xattr.h>
# include <errno.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>

typedef struct s_env	t_env;
struct	s_env
{
	char	flag_a;
	char	flag_l;
	char	flag_rec;
	char	flag_rev;
	char	flag_t;
	char	flag_1;
	char	flag_o;
	char	flag_n;
	t_lst	*a_l;
};

char	*lnk(t_lst *tmp);
int		atr(char *str);
int		countchar(char *str);
void	read_dir(char *str, t_env *e, int root, char *alone);
void	flagn(t_lst **f, t_env *e);
void	noflagn(t_lst **f, t_env *e);
int		check_arg(char *str);
char	*convert_date(time_t time);
char	*convert_old_date(char *str);
char	*convert_dirname(char *str);
char	*convert_mode(mode_t mode, char *str);
char	*get_folder(char *str);
t_lst	*sort_name(t_lst **a_l);
t_lst	*sort_date(t_lst **a_l);
void	sort_av(int ac, char **av, t_env *e);
void	print_list(t_env *e, int root, char *alone);
void	space(int current, int max, int type, int atr);
int		ln(int n);
void	calc(t_lst **a_l);
void	calc2(t_lst **a_l);
t_lst	*grt(t_lst **a_l, int what, int i);
t_lst	*grt2(t_lst **a_l, int what, int i);
int		ft_ishidden(char *str);
#endif
