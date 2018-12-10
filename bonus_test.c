/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 22:53:10 by thorker           #+#    #+#             */
/*   Updated: 2018/12/10 15:49:54 by thorker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "fttest.h"
int	bonus_test()
{
	char	*line;
	int		file1;
	int		file2;
	int		file3;
	int		file4;
	int		re;
	int		i;

	file1 = open("test1",O_RDONLY);
    file2 = open("test2",O_RDONLY);
	file3 = open("test3",O_RDONLY);
    file4 = open("test4",O_RDONLY);

	i = 0;
    re = get_next_line(file1,&line);
	if (ft_put_error(re, 1, line, "Test11", &i) == 0)
		return (i);
	free (line);
    re = get_next_line(file2, &line);
	if (ft_put_error(re, 1, line, "Test21", &i) == 0)
		return (i);
	free(line);
    re = get_next_line(file3,&line);
	if (ft_put_error(re, 1, line, "Test31", &i) == 0)
		return (i);
	free(line);
    re = get_next_line(file4,&line);
	if (ft_put_error(re, 1, line, "Test41", &i) == 0)
		return (i);
	free(line);
    re = get_next_line(file2,&line);
	if (ft_put_error(re, 1, line, "Test22", &i) == 0)
		return (i);
	free(line);
    re = get_next_line(file4,&line);
	if (ft_put_error(re, 1, line, "Test42", &i) == 0)
		return (i);
	free(line);
    re = get_next_line(file3,&line);
	if (ft_put_error(re, 1, line, "Test32", &i) == 0)
		return (i);
	free(line);
    re = get_next_line(file1,&line);
    if (ft_put_error(re, 1, line, "Test12", &i) == 0)
		return (i);
	free(line);
	re = get_next_line(file2,&line);
	if (ft_put_error(re, 0, line, "", &i) == 0)
		return (i);
	free(line);
	close(file1);
    close(file2);
    close(file3);
    close(file4);
	return (0);
}

int	main()
{
	int i;

	if ((i = bonus_test()) == 0)
		ft_putstrln("Everything OK");
	else
	{
		ft_put_my_str("Problem in ");
		ft_putnbrln(i);
	}
	return (0);
}
