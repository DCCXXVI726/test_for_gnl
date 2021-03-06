/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:33:53 by thorker           #+#    #+#             */
/*   Updated: 2018/12/07 21:12:35 by thorker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fttest.h"

void	ft_put_my_str(char const *c)
{
	if (c != NULL)
	{
		while (*c != '\0')
		{
			ft_put_my_char(*c);
			c++;
		}
	}
}
