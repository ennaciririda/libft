/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:23:53 by rennacir          #+#    #+#             */
/*   Updated: 2022/11/07 13:35:34 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s;
	char	*t;
	size_t	i;

	i = 0;
	len = ft_strlen(s1);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	t = s;
	while (i < len)
	{
		*s = *s1;
		s++;
		s1++;
		i++;
	}
	*s = '\0';
	return (t);
}
