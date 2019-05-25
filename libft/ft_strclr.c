/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: croxana <croxana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 10:56:01 by croxana           #+#    #+#             */
/*   Updated: 2019/05/25 11:19:13 by croxana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_strclr(char *s)
{
	int i;

	i = 0;
	if (s)
		while (s[i])
			s[i++] = '\0';
}
