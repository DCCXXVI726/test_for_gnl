/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_re_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 18:22:23 by thorker           #+#    #+#             */
/*   Updated: 2018/12/10 11:55:02 by thorker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fttest.h"

void	ft_put_re_error(int re, int sh)
{
	ft_put_my_str("Your re = ");
	ft_putnbrln(re);
	ft_put_my_str("Should  = ");
	ft_putnbrln(sh);
}

int		ft_put_error(int re, int re_sh, char *line, char *line_sh, int *i)
{
	*i = *i + 1;
	if (re != re_sh)
	{
		ft_put_re_error(re, re_sh);
		return (0);
	}
	if (re == -1)
		return (1);
	*i = *i + 1;
	if (ft_cmp_line(line,line_sh) != 0)
	{
		ft_put_line_error(line, line_sh);
		return (0);
	}
	return (1);
}
