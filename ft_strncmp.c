/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aogul <aogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:36:05 by aogul             #+#    #+#             */
/*   Updated: 2024/11/10 20:25:05 by aogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_temp;
	unsigned char	*s2_temp;

	s1_temp = (unsigned char *)s1;
	s2_temp = (unsigned char *)s2;
	i = 0;
	while (n > i && *(s1 + i) && *(s2 + i))
	{
		if (*(s1_temp + i) != *(s2_temp + i))
			return (*(s1_temp + i) - *(s2_temp + i));
		i++;
	}
	if (n > i)
		return (*(s1_temp + i) - *(s2_temp + i));
	return (0);
}
