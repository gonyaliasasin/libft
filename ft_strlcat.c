/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aogul <aogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:35:59 by aogul             #+#    #+#             */
/*   Updated: 2024/11/10 20:25:00 by aogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*(dest + i) && (i < size))
		i++;
	while (*(src + j) && ((i + j + 1) < size))
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	if (i < size)
		*(dest + i + j) = '\0';
	while (*(src + j))
		j++;
	return (i + j);
}
