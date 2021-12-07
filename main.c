/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:12:44 by arudy             #+#    #+#             */
/*   Updated: 2021/12/07 20:30:32 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int	main(void)
{
	printf("TEST FT_PRINTF\n\n");

	printf("TEST 1\n\n");
	printf("%d\n", ft_printf("Salut ca va ? %c\n", 'a'));
	printf("TEST 2\n\n");
	char	str[] = "Salut les loulous";
	printf("%d\n", ft_printf("Salut ca va ? %s\n", str));
	return (0);
}

// Checker avec un % a la fin

