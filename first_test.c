/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:42:49 by thorker           #+#    #+#             */
/*   Updated: 2018/12/10 12:15:45 by thorker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fttest.h"
#include <fcntl.h>
int	ft_first_test()
{
	int	file;
	int	re;
	char *line;

	file = open("first_test_txt", O_RDONLY);
	re = get_next_line(file, &line);
	if (re != 1)
	{
		ft_put_re_error(re, 1);
		close(file);
		return (1);
	}
	if (ft_cmp_line(line, "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ") != 0)
	{
		ft_put_line_error(line , "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ");
		close(file);
		return (2);
	}
	free(line);
	re = get_next_line(file, &line);
	if (re != 1)
	{
		ft_put_re_error(re, 1);
		close(file);
		return (3);
	}
	if (ft_cmp_line(line, "0123") != 0)
	{
		ft_put_line_error(line , "0123");
		close(file);
		return (4);
	}
	free(line);
	re = get_next_line(file, &line);
	if (re != 0)
	{
		ft_put_re_error(re, 0);
		close(file);
		return (5);
	}
	re = get_next_line(file, &line);
	if (re != 0)
	{
		ft_put_re_error(re, 0);
		close(file);
		return (6);
	}
	close (file);
	return (0);
}

int main()
{
	int i;

	i = ft_first_test();
	if (i != 0)
	{
		ft_put_my_str("Problem in ");
		ft_putnbrln(i);
	}
	else
	{
		ft_putstrln("Everything OK");
	}
	return (0);
}
