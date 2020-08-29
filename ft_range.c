/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkirby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 11:55:21 by nkirby            #+#    #+#             */
/*   Updated: 2020/08/21 21:11:06 by nkirby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*res;
	int		difference;
	int		i;

	i = 0;
	difference = max - min;
	if (min >= max)
		return (NULL);
	res = (int *)malloc(max - min);
	if (*res)
		return (NULL);
	while (difference > i)
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}
