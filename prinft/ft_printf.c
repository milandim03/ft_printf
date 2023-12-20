/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:38:10 by milandim          #+#    #+#             */
/*   Updated: 2023/12/20 16:38:10 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printformat(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		return (ft_print_char(va_arg(ap, int)));
	else if (specifier == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_print_digit((long)(va_arg(ap, int)), 16));
	else if (specifier == 'u')
		return (ft_print_undigit(va_arg(ap, unsigned int)));
	else if (specifier == 'p')
		return (ft_print_p(va_arg(ap, void *)));
	else if (specifier == 'x' || specifier == 'X')
		return (ft_print_x((va_arg(ap, int)), specifier));
	else
		return (ft_putchar(specifier));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		i;

	if (!format)
	{
		return (count = -1);
	}
	va_start(ap, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != NULL)
			count += ft_printformat(format[++i], ap);
		else
			count += ft_putchar(format[i]);
		++i;
	}
	va_end(ap);
	return (count);
}

// int	main(void)
// {
// 	int count;
// 	char c[] = "ola sor!";

// 	count = ft_printf("Hello %d\n", -456);
// 	ft_printf("The chars written are %d\n", count);
// 	count = printf("Hello %d\n", -456);
// 	printf("The chars written are %d\n\n", count);
// 	count = ft_printf("%X\n", -123);
// 	ft_printf("The chars written are %d\n", count);
// 	count = printf("%X\n", -123);
// 	printf("The chars written are %d\n\n", count);
// 	count = ft_printf("%x\n", -123);
// 	ft_printf("The chars written are %d\n", count);
// 	count = printf("%x\n", -123);
// 	printf("The chars written are %d\n\n", count);
// 	count = ft_printf("adress %p\n", c);
// 	ft_printf("The chars written are %d\n", count);
// 	count = printf("adress %p\n", c);
// 	printf("The chars written are %d\n\n", count);
// 	count = ft_printf("adress %c\n", 'a');
// 	ft_printf("The chars written are %d\n", count);
// 	count = printf("adress %c\n", 'a');
// 	printf("The chars written are %d\n\n", count);
// 	count = ft_printf("adress %s\n", c);
// 	ft_printf("The chars written are %d\n", count);
// 	count = printf("adress %s\n", c);
// 	printf("The chars written are %d\n\n", count);
// 	count = ft_printf("adress %u\n", -154);
// 	ft_printf("The chars written are %d\n", count);
// 	count = printf("adress %u\n", -154);
// 	printf("The chars written are %d\n\n", count);
// 	count = ft_printf("adress %i\n", 154);
// 	ft_printf("The chars written are %d\n", count);
// 	count = printf("adress %i\n", 154);
// 	printf("The chars written are %d\n\n", count);
// 	count = ft_printf("adress %%\n", 5);
// 	ft_printf("The chars written are %d\n", count);
// 	count = printf("adress %%\n", 5);
// 	printf("The chars written are %d\n\n", count);
// 	int num;

// 	num = printf(NULL);
// 	printf("%d\n\n", num);
// 	num = ft_printf(NULL);
// 	ft_printf("%d\n\n", num);
// }