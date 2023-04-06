/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:52:59 by rennacir          #+#    #+#             */
/*   Updated: 2022/11/07 13:35:05 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*q;
	size_t			i;

	i = 0;
	p = (unsigned char *)dest;
	q = (unsigned char *)src;
	if (src == dest)
		return (dest);
	if (!p && !q)
		return (NULL);
	while (i < n)
	{
		p[i] = q[i];
		i++;
	}
	return (dest);
}
