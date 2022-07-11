/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-brit <vde-brit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:43:32 by vde-brit          #+#    #+#             */
/*   Updated: 2022/06/22 20:58:55 by vde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*memory;

	if (!dest)
		return (NULL);
	i = 0;
	memory = (unsigned char *)dest;
	while (len > i)
	{
		memory[i] = c;
		i++;
	}
	return (memory);
}
