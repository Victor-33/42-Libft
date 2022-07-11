/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-brit <vde-brit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 19:37:10 by vde-brit          #+#    #+#             */
/*   Updated: 2022/07/03 04:35:58 by vde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*aux;

	if (nmemb == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	aux = malloc(nmemb * size);
	if (!aux)
		return (NULL);
	ft_bzero(aux, (nmemb * size));
	return (aux);
}
