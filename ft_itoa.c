/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:29:26 by yufonten          #+#    #+#             */
/*   Updated: 2023/10/22 17:02:36 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_size(int n)
{
	int	i;
	int	sign;

	i = 0;
	sign = 0;
	if (n < 0)
		sign = 1;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i + sign);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*r;
	int		i;
	int		assist;

	assist = n;
	i = count_size(n);
	r = malloc(sizeof(char) * (i + 1));
	if (!r)
		return (NULL);
	i--;
	while (i >= 0)
	{
		if (i == 0 && n < 0)
			r[i] = '-';
		else
		{
			r[i] = ft_abs(assist % 10) + 48;
			assist = assist / 10;
		}
		i--;
	}
	r[count_size(n) + 1] = '\0';
	return (r);
}
