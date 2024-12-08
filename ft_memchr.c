/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aogul <aogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:35:48 by aogul             #+#    #+#             */
/*   Updated: 2024/11/10 20:24:43 by aogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s1, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (n > i)
	{
		if (*(unsigned char *)(s1 + i) == (unsigned char)c)
			return ((void *)(s1 + i));
		i++;
	}
	return (NULL);
}
