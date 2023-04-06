/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:02:51 by rennacir          #+#    #+#             */
/*   Updated: 2022/10/30 20:09:37 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static void	count_int(char *str, int n, int i, int j)
{
	if (n < 0)
	{
		str[0] = '-';
		i++;
		n = n * (-1);
	}
	while (i < j)
	{
		str[j - 1] = n % 10 + 48;
		n = n / 10;
		j--;
	}
}

static char	*minva(long n)
{
	char	*mx;
	int		i;

	i = 12;
	mx = malloc(12);
	if (!mx)
		return (0);
	n = n * (-1);
	mx[0] = '-';
	mx[i - 1] = '\0';
	i--;
	while (i > 1)
	{
		mx[i - 1] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	return (mx);
}

static int	count_chr(int i, int j)
{
	while (i / 10 != 0)
	{
		i = i / 10;
		j++;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		j;
	int		i;

	j = 1;
	i = n;
	if (n == -2147483648)
	{
		str = minva(n);
		return (str);
	}
	j = count_chr(i, j);
	if (n < 0)
		j++;
	str = malloc(j + 1);
	if (!str)
		return (0);
	i = 0;
	count_int(str, n, i, j);
	str[j] = '\0';
	return (str);
}
