/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:44:00 by arudy             #+#    #+#             */
/*   Updated: 2021/12/08 15:04:31 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_conv(char c)
{
	if (c == 'c' || c == 's'|| c == 'p' || c == 'd'|| c == 'i' || c == 'u'
		|| c == 'x' || c == 'X'||c == '%')
		return (1);
	return (0);
}

int	check_conv(char c, va_list args)
{
	size_t	len;

	len = 0;
	if (c == 'c')
		len = ft_putchar(va_arg(args, int));
	else if (c == 's')
		len = ft_putstr(va_arg(args, char *));
	else if (c == 'i' || c == 'd')
		len = ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		len += ft_putnbr_u(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		len += ft_putnbr_x(va_arg(args, unsigned int), c);
	else if (c == 'p')
	{
		len += ft_putstr("0x");
		len += ft_putnbr_x(va_arg(args, unsigned long long int), c);
	}
	else if (c == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	i;
	size_t	len;

	va_start(args, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%' && is_conv(str[i + 1]))
		{
			len += check_conv(str[i + 1], args);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
