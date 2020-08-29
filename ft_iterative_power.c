/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkirby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 17:00:50 by nkirby            #+#    #+#             */
/*   Updated: 2020/08/18 19:45:54 by nkirby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int sum;

	sum = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	while (power != 0)
	{
		sum *= nb;
		power--;
	}
	return (sum);
}
