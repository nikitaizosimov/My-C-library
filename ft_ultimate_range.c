/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkirby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 21:11:44 by nkirby            #+#    #+#             */
/*   Updated: 2020/08/21 22:24:07 by nkirby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*arr;
	int		i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int*)malloc(sizeof(int) * (max - min));
	if (*arr)
		return (-1);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (i);
}
