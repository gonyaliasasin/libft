/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aogul <aogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:02:16 by aogul             #+#    #+#             */
/*   Updated: 2024/11/15 16:23:34 by aogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	res = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!res)
		return (NULL);
	while (*(s + i))
	{
		*(res + i) = f(i, *(s + i));
		i++;
	}
	res[i] = '\0';
	return (res);
}
