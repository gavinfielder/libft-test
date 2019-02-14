/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfielder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 18:52:34 by gfielder          #+#    #+#             */
/*   Updated: 2019/02/13 17:24:08 by gfielder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (len == 0)
		return (dst);
	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			*((unsigned char *)dst + i) = *((unsigned char *)src + i);
			i++;
		}
	}
	else if (dst > src)
	{
		i = len - 1;
		while (1)
		{
			*((unsigned char *)dst + i) = *((unsigned char *)src + i);
			if (i == 0)
				break ;
			i--;
		}
	}
	return (dst);
}
