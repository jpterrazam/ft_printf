/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 23:11:35 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/06/18 19:44:49 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "./libft/libft.h"

int	ft_printf(const char *str_format, ...);
int	ft_printf_char(char c);
int	ft_printf_str(char *s);
int	ft_printf_pointer(unsigned long long int n);
int	ft_printf_int(int n);
int	ft_printf_u_int(unsigned int n);
int	ft_printf_hex_upper(unsigned long int n);
int	ft_printf_hex_lower(unsigned long int n);

#endif
