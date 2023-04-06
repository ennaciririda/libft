/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:02:27 by rennacir          #+#    #+#             */
/*   Updated: 2022/11/07 13:05:13 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;
	size_t	k;

	k = 0;
	s = ft_strlen(src);
	if (dstsize == 0)
		return (s);
	d = ft_strlen(dst);
	if (d > dstsize)
		return (dstsize + s);
	while (src[k] && k + d < dstsize - 1)
	{
		dst[d + k] = src[k];
		k++;
	}
	dst[d + k] = '\0';
	return (d + s);
}
