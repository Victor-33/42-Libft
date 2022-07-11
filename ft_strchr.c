/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-brit <vde-brit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 19:17:04 by vde-brit          #+#    #+#             */
/*   Updated: 2022/07/03 02:57:27 by vde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	aux;

	aux = c;
	while (*s != aux)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return ((char *)s);
}
