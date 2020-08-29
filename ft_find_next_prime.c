/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkirby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 18:58:30 by nkirby            #+#    #+#             */
/*   Updated: 2020/08/19 19:27:21 by nkirby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int i;

	i = 1;
	if (nb < 0 || nb == 0 || nb == 1)
		return (ft_find_next_prime(nb + 1));
	else if (nb > 2147483647)
		return (0);
	while (nb - i > 1)
	{
		if (nb % (nb - i) == 0)
			return (ft_find_next_prime(nb + 1));
		else
			i++;
	}
	return (nb);
}
