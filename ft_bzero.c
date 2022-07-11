/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-brit <vde-brit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 19:29:56 by vde-brit          #+#    #+#             */
/*   Updated: 2022/06/22 19:56:47 by vde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*memory;

	memory = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		memory[i] = '\0';
		i++;
	}
	return ((void)memory);
}
