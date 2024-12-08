/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aogul <aogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:02:00 by aogul             #+#    #+#             */
/*   Updated: 2024/11/10 20:24:54 by aogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*(s + i))
	{
		while (*(s + i) && *(s + i) == c)
			i++;
		if (*(s + i) && *(s + i) != c)
		{
			i++;
			count++;
		}
		while (*(s + i) && *(s + i) != c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	len;
	size_t	i;

	ret = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!ret)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c)
			{
				s++;
				len++;
			}
			ret[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	ret[i] = 0;
	return (ret);
}
