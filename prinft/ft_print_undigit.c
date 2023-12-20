/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_undigit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:13:23 by milandim          #+#    #+#             */
/*   Updated: 2023/12/20 15:13:23 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_undigit(unsigned int n)
{
    int count;

    count = 0;

    if (n < 10)
        count += print_char(LOWER_CASE[n]);
    else
    {
        count += print_char(n % 10);
        count += print_digit(n / 10, 10);
    }
    return count;
}
