/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_for_miss.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 12:26:48 by thorker           #+#    #+#             */
/*   Updated: 2018/12/10 16:00:39 by thorker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fttest.h"
int	test_for_miss()
{
	int re;
	char *line;
	int i;
	int k;

	k = -1;
	i = 0;
	re = get_next_line(k, &line);
	if (ft_put_error(re, -1, line, line, &i) == 0)
		return (i);
	k = 42;
	re = get_next_line(k, &line);
	if (ft_put_error(re, -1, line, line, &i) == 0)
		return (i);
	re = get_next_line(1, NULL);
	if (ft_put_error(re, -1, line, line, &i) == 0)
		return (i);
	return (0);
}

int main()
{
	int	i;

	if ((i = test_for_miss()) == 0)
		ft_putstrln("Everything OK");
	else
	{
		ft_put_my_str("Problem in ");
		ft_putnbrln(i);
	}
	return (0);
}
