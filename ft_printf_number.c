/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 00:15:32 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/06/18 03:02:25 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_int(int n)
{
	char	*s;
	int		n_chars;

	s = ft_itoa(n);
	n_chars = ft_printf_str(s);
	free(s);
	return (n_chars);
}

int	ft_printf_u_int(unsigned int n)
{
	char	*s;
	int		n_chars;

	s = ft_itoa_u(n);
	n_chars = ft_printf_str(s);
	free(s);
	return (n_chars);
}

int	ft_printf_hex_upper(unsigned long int n)
{
	char	*s;
	int		n_chars;

	s = NULL;
	s = ft_itoa_base(n, "0123456789ABCDEF");
	n_chars = ft_printf_str(s);
	free(s);
	return (n_chars);
}

int	ft_printf_hex_lower(unsigned long int n)
{
	char	*s;
	int		n_chars;

	s = ft_itoa_base(n, "0123456789abcdef");
	n_chars = ft_printf_str(s);
	free(s);
	return (n_chars);
}
