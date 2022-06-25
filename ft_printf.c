/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 00:15:32 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/06/20 21:01:28 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	type_detector(char c, va_list args)
{
	if (c == 'c')
		return (ft_printf_char(va_arg(args, int)));
	if (c == '%')
		return (ft_printf_char('%'));
	if (c == 's')
		return (ft_printf_str(va_arg(args, char *)));
	if (c == 'i' || c == 'd')
		return (ft_printf_int(va_arg(args, int)));
	if (c == 'u')
		return (ft_printf_u_int(va_arg(args, unsigned int)));
	if (c == 'x')
		return (ft_printf_hex_lower(va_arg(args, int)));
	if (c == 'X')
		return (ft_printf_hex_upper(va_arg(args, int)));
	if (c == 'p')
		return (ft_printf_pointer(va_arg(args, unsigned long int)));
	return (-1);
}

int	ft_printf(const char *str_format, ...)
{
	va_list	args;
	int		n_chars;
	int		i;

	va_start(args, str_format);
	i = 0;
	n_chars = 0;
	while (str_format[i])
	{
		if (str_format[i] != '%')
		{
			n_chars += write(1, &str_format[i], 1);
			i++;
		}
		else
		{
			n_chars += type_detector(str_format[++i], args);
			i ++;
		}
	}
	va_end(args);
	return (n_chars);
}
