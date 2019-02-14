/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfielder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 12:27:04 by gfielder          #+#    #+#             */
/*   Updated: 2019/02/11 19:45:10 by gfielder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < n)
	{
		if (i == j && src[i] != '\0')
		{
			dest[i] = src[i];
			j++;
		}
		else
			dest[i] = '\0';
		i++;
	}
	return (dest);
}
