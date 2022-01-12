/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:27:41 by dvallien          #+#    #+#             */
/*   Updated: 2021/11/05 18:32:44 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_size;
	size_t	dest_size;

	i = 0;
	j = 0;
	src_size = ft_strlen((char *)src);
	dest_size = ft_strlen((char *)dest);
	if (size == 0 || size < dest_size)
		return (src_size + size);
	if (src_size == 0)
		return (dest_size);
	while (src[j] && dest_size + j < size - 1)
	{
		dest[dest_size + j] = src[j];
		j++;
	}
	dest[dest_size + j] = '\0';
	return (src_size + dest_size);
}
