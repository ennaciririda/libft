/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:14:01 by rennacir          #+#    #+#             */
/*   Updated: 2022/11/07 13:43:01 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t		k;
	int			i;
	int			j;

	i = 0;
	if (!big && !len)
		return (NULL);
	if (!(*little))
		return ((char *)big);
	while (*big)
	{
		k = 0;
		j = 0;
		while (little[j] == big[j] && i + k < len)
		{
			k++;
			j++;
			if (little[j] == '\0')
				return ((char *)big);
		}
		big++;
		i++;
	}
	return (0);
}
