/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aogul <aogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:36:08 by aogul             #+#    #+#             */
/*   Updated: 2024/11/10 20:25:07 by aogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*temp;
	unsigned char	c_temp;

	temp = s;
	c_temp = c;
	s += ft_strlen((char *)s);
	while (s >= temp)
	{
		if (*s == c_temp)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
