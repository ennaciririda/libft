/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:59:17 by rennacir          #+#    #+#             */
/*   Updated: 2022/11/07 13:32:23 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *str, int c, size_t count)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)str;
	i = 0;
	while (i < count)
	{
		*p = (unsigned char)c;
		p++;
		i++;
	}
	return (str);
}
