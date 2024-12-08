/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aogul <aogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:36:11 by aogul             #+#    #+#             */
/*   Updated: 2024/11/10 20:25:06 by aogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (*(haystack + i) && (len > i))
	{
		j = 0;
		while (*(haystack + i + j) && *(needle + j)
			&& *(haystack + i + j) == *(needle + j) && (len > (i + j)))
			j++;
		if (!*(needle + j))
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
