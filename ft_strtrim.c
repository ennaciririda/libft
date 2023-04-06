/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:24:36 by rennacir          #+#    #+#             */
/*   Updated: 2022/11/07 13:28:24 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	is_existe(const char *str, char d)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == d)
			return (1);
		i++;
	}
	return (0);
}

static char	*alloc(char const *str, int i, int a)
{
	char	*tri;
	int		j;

	tri = malloc(a - i + 2);
	if (!tri)
		return (NULL);
	j = 0;
	while (j < a - i + 1)
	{
		tri[j] = str[i + j];
		j++;
	}
	tri[j] = '\0';
	return (tri);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		a;
	int		i;
	char	*trim;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	a = ft_strlen(s1);
	a--;
	while (s1[i] && is_existe(set, s1[i]))
		i++;
	while (a > 0 && is_existe(set, s1[a]))
		a--;
	if (a - i + 1 < 0)
		trim = ft_strdup("");
	else
		trim = alloc(s1, i, a);
	return (trim);
}
