/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aogul <aogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:02:23 by aogul             #+#    #+#             */
/*   Updated: 2024/11/10 20:25:09 by aogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	while (*(s + start + i))
		i++;
	if (len > i)
		len = i;
	substr = (char *)malloc((len + 1) * sizeof(*s));
	if (substr == NULL)
		return (substr);
	i = 0;
	while (s[start + i] && len > i)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
