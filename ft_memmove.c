/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:41:58 by rennacir          #+#    #+#             */
/*   Updated: 2022/11/07 13:35:22 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	i = 0;
	d = (char *)dst;
	s = (const char *)src;
	if (!src && !dst)
		return (NULL);
	if (!len)
		return (dst);
	if (d > s && len > 0)
	{
		len--;
		while (len > 0)
		{
			d[len] = s[len];
			len--;
		}
		d[len] = s[len];
	}
	else
		d = ft_memcpy(d, s, len);
	return (d);
}
