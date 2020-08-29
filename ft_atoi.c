/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkirby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 16:12:12 by nkirby            #+#    #+#             */
/*   Updated: 2020/08/17 21:10:02 by nkirby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_odd(int count)
{
	if (count % 2 == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		add_string(int sign, char *str, int sum)
{
	int result;

	result = 0;
	if (sign == 1)
	{
		result = (sum * 10) + (*str - 48);
	}
	else
	{
		result = (sum * 10) - (*str - 48);
	}
	return (result);
}

int		ft_atoi(char *str)
{
	int sign;
	int sum;

	sign = 0;
	sum = 0;
	while (*str == '\a' || *str == '\b' || *str == '\t' ||
			*str == '\n' || *str == '\v' || *str == '\f' ||
			*str == ' ' || *str == '\0')
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign += 1;
		str++;
	}
	sign = is_odd(sign);
	while (*str >= '0' && *str <= '9')
	{
		sum = add_string(sign, str, sum);
		str++;
	}
	return (sum);
}
