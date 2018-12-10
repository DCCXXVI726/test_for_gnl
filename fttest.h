/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fttest.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 18:11:35 by thorker           #+#    #+#             */
/*   Updated: 2018/12/10 16:01:59 by thorker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTTEST_H
# define FTTEST_H
# include <stdio.h>
# include <unistd.h>
# include "../get_next_line/get_next_line.h"
# include "../get_next_line/libft/libft.h"
int		ft_put_error(int re, int re_sh, char *line, char *line_sh, int *i);
void	ft_put_my_nbr(int i);
void	ft_put_my_char(char c);
int		ft_cmp_line(const char *s1, const char *s2);
void	ft_put_my_str(char const *str);
void	ft_putnbrln(int i);
void	ft_putstrln(char const *str);
int		ft_first_test(void);
void	ft_put_re_error(int re, int sh);
void	ft_put_line_error(char *line, char *sh);
# endif
