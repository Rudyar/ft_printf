/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:59:10 by arudy             #+#    #+#             */
/*   Updated: 2021/12/08 12:11:07 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	unsigned int	nb;
	int				len;

	nb = n;
	len = 0;
	if (nb > 9)
		len += ft_putnbr(nb / 10);
	len += ft_putchar(nb % 10 + '0');
	return (len);
}
