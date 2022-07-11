/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-brit <vde-brit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:10:39 by vde-brit          #+#    #+#             */
/*   Updated: 2022/07/03 01:28:28 by vde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_allocsize(const char *s, char c)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			n++;
		if (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c)
			n++;
		i++;
	}
	return (n);
}

static char	**ft_free(char **f)
{
	free(f);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	n;
	size_t	holder;
	char	**split;

	i = 0;
	n = 0;
	split = (char **)malloc(sizeof(char *) * (ft_allocsize(s, c) + 1));
	if (!s || !split)
		ft_free(split);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		holder = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > holder)
		{
			split[n] = ft_substr((s + holder), 0, (i - holder));
			n++;
		}
	}
	split[n] = 0;
	return (split);
}
