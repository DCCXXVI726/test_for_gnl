/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_line_error.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 18:27:56 by thorker           #+#    #+#             */
/*   Updated: 2018/12/07 21:03:17 by thorker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fttest.h"

void	ft_put_line_error(char *line, char *sh)
{
	ft_put_my_str("Your line = ");
	ft_putstrln(line);
	ft_put_my_str("Should be = ");
	ft_putstrln(sh);
}
