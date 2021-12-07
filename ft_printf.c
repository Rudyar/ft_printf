/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:44:00 by arudy             #+#    #+#             */
/*   Updated: 2021/12/07 20:34:55 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int	check_conv(char c, va_list args)
{
	size_t	len;

	len = 0;
	if (c == 'c')
		len = ft_putchar(va_arg(args, int));
	else if (c == 's')
		len = ft_putstr(va_arg(args, char *));
	else if (c == 'i' || c == 'd')
		len = ft_putstr(va_arg(args, int));
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
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
				len += ft_putchar('%');
			else
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
