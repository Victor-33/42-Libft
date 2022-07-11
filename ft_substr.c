/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-brit <vde-brit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 21:10:07 by vde-brit          #+#    #+#             */
/*   Updated: 2022/06/23 22:04:39 by vde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	s_len;
	char			*ptr_s;
	size_t			i;

	if (!s)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	if (((s_len - start) > len) && (start < s_len))
		ptr_s = malloc((len * sizeof(char) + 1));
	else if (start > s_len)
		ptr_s = malloc(sizeof(char));
	else
		ptr_s = malloc(((s_len - start) * sizeof(char) + 1));
	if (!ptr_s)
		return (NULL);
	if (start < s_len)
	{
		while (s[start] != '\0' && i < len)
			ptr_s[i++] = s[start++];
	}
	ptr_s[i] = '\0';
	return (ptr_s);
}
