/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: croxana <croxana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:52:31 by croxana           #+#    #+#             */
/*   Updated: 2019/05/25 11:20:23 by croxana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	num;
	int		flag;

	i = 0;
	num = 0;
	flag = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		flag = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && ft_isdigit(*(str + i)) == 1)
	{
		if ((num * 10 + (str[i] - '0') < num) || (num * 10 / 10 != num))
			return (flag == 1 ? -1 : 0);
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return ((int)num * flag);
}
