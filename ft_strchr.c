/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aogul <aogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:35:57 by aogul             #+#    #+#             */
/*   Updated: 2024/11/15 17:09:34 by aogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c_temp;

	c_temp = c;
	while (*s)
	{
		if (*(unsigned char *)s == c_temp)
			return ((char *)s);
		s++;
	}
	if (c_temp == '\0')
		return ((char *)s);
	return (0);
}
