/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfielder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 15:23:23 by gfielder          #+#    #+#             */
/*   Updated: 2019/02/13 17:22:23 by gfielder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#ifndef ABS
# define ABS(x) ((x) < 0 ? (-(x)) : (x))
#endif

static char	*format_return(char *buff, int len)
{
	int		i;
	char	*ret;

	ret = malloc(len + 1);
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ret[i] = buff[len - i - 1];
		i++;
	}
	ret[len] = '\0';
	return (ret);
}

char		*ft_itoa(int value)
{
	int		negative;
	char	buff[11];
	int		len;

	negative = 0;
	if (value < 0)
		negative = 1;
	len = 0;
	while (value || len == 0)
	{
		buff[len] = '0' + ABS(value % 10);
		len++;
		value /= 10;
	}
	if (negative)
	{
		buff[len] = '-';
		len++;
	}
	return (format_return(buff, len));
}
