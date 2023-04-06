/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:52:42 by rennacir          #+#    #+#             */
/*   Updated: 2022/10/30 20:10:44 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] && i < size - 1)
		{
		dest[i] = src[i];
		i++;
		}
	dest[i] = '\0';
	}
	return (x);
}
