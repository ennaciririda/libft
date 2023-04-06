/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:48:04 by rennacir          #+#    #+#             */
/*   Updated: 2022/11/06 19:26:51 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	p;

	p = (char)c;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == p)
			return ((char *)(str + i));
		i--;
	}
	return (0);
}
