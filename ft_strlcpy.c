/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aogul <aogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:36:01 by aogul             #+#    #+#             */
/*   Updated: 2024/11/10 20:25:01 by aogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size > 0)
	{
		while (*(src + count) && (count < (size - 1)))
		{
			*(dest + count) = *(src + count);
			count++;
		}
		*(dest + count) = '\0';
	}
	while (*(src + count))
		count++;
	return (count);
}
