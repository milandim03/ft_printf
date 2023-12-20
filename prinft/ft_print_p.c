/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:34:34 by milandim          #+#    #+#             */
/*   Updated: 2023/12/20 16:34:34 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p2(long n)
{
	int				count;
	unsigned long	nb;

	count = 0;
	nb = n;
	if (nb < 16)
	{
		count += ft_print_char(LOWER_CASE[nb]);
	}
	else
	{
		count += ft_print_p2(nb / 16);
		count += ft_print_p2(nb % 16);
	}
	return (count);
}

int	ft_print_p(void *address)
{
	int	count;

	count = 0;
	if (!address)
	{
		count += ft_putstr("(nil)");
		return (count);
	}
	else
	{
		write(1, "0x", 2);
		count += ft_print_p2((long)address);
	}
	return (count + 2);
}
