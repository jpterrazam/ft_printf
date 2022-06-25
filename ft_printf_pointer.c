/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 00:15:32 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/06/22 20:12:26 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_pointer(unsigned long long int n)
{
	char	*s;
	int		n_chars;

	n_chars = 0;
	if (n == 0)
		return (write(1, "(nil)", 5));
	s = ft_itoa_ptr(n);
	n_chars += ft_printf_str(s);
	free(s);
	return (n_chars);
}
