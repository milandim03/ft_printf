/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:04:07 by milandim          #+#    #+#             */
/*   Updated: 2023/12/20 15:04:07 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_digit(long n, int base)
{
    int count;

    if (n < 0)
    {
        write(1, "-", 1);
        count += print_digit(-n, base) + 1;
    }
    else if (n < base)
        count += print_char(LOWER_CASE[n]);
    else
    {
        count += print_char(n % base);
        count += print_digit(n / base, base);
        }
    return count;
}