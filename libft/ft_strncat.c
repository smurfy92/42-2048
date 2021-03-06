/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 16:00:38 by jtranchi          #+#    #+#             */
/*   Updated: 2015/11/29 16:00:39 by jtranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int i;

	i = 0;
	while (s1[i])
		i++;
	if (n > 0)
	{
		while (*s2 && n-- > 0)
			s1[i++] = *(s2++);
		s1[i] = '\0';
	}
	return (s1);
}
