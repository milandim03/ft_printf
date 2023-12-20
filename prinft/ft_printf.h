/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:38:02 by milandim          #+#    #+#             */
/*   Updated: 2023/12/20 16:38:02 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define UPPER_CASE "0123456789ABCDEF"
# define LOWER_CASE "0123456789abcdef"

int	ft_printf(const char *format, ...);
int	ft_print_char(int c);
int	ft_putstr(char *str);
int	ft_print_digit(long n, int base);
int	ft_print_x(int n, char c);
int	ft_print_undigit(unsigned int n);
int	ft_print_p(void *address);

#endif