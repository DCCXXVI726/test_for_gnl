/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:35:36 by thorker           #+#    #+#             */
/*   Updated: 2018/12/07 21:03:08 by thorker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_cmp_line(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		if ((unsigned char)(*(s1 + i)) != (unsigned char)(*(s2 + i)))
			return ((unsigned char)(*(s1 + i)) - (unsigned char)(*(s2 + i)));
		i++;
	}
	return ((unsigned char)(*(s1 + i)) - (unsigned char)(*(s2 + i)));
}
