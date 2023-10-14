/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:17:14 by yufonten          #+#    #+#             */
/*   Updated: 2023/10/14 14:21:56 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzer(void *s, size_t n)
{
	size_t	i;
	char	*r;

	if (!s)
		return (NULL);
	r = s;
	i = 0;
	while (i < n)
	{
		r[i] = 0;
		i++;
	}
}