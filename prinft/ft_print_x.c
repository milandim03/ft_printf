/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:31:25 by milandim          #+#    #+#             */
/*   Updated: 2023/12/20 16:31:25 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(int n, char c)
{
	int				count;
	unsigned int	nb;

	count = 0;
	nb = n;
	if (nb < 16)
	{
		if (c == 'x')
		{
			count += ft_print_char(LOWER_CASE[nb]);
		}
		else if (c == 'X')
			count += ft_print_char(UPPER_CASE[nb]);
	}
	else
	{
		count += ft_print_x(nb / 16, c);
		count += ft_print_x(nb % 16, c);
	}
	return (count);
}
