/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekans <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 15:10:13 by gekans            #+#    #+#             */
/*   Updated: 2020/10/27 15:10:16 by gekans           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*c;

	c = dest;
	while (*src != '\0')
	{
		*dest = (char)*src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (c);
}
