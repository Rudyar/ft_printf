/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:12:44 by arudy             #+#    #+#             */
/*   Updated: 2021/12/08 15:32:19 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int	main(void)
{
	char	str[] = "Salut les loulous";
	int		a = 12;
	int		b = -12;
	int		c = 0;
	int		d = -2147483648;
	int		e = 2147483647;
	printf("TEST FT_PRINTF\n\n");

	printf("TEST 1\n\n");
	printf("Return du mien : \n");
	ft_printf("%d\n", ft_printf("Salut ca va ? %c\n", 'a'));
	printf("Return du vrai : \n");
	printf("%d\n", printf("Salut ca va ? %c\n", 'a'));

	printf("\n\nTEST 2\n\n");
	printf("Return du mien : \n");
	ft_printf("%d\n", ft_printf("Salut ca va ? %s %s %%\n", str, ""));
	printf("Return du vrai : \n");
	printf("%d\n", printf("Salut ca va ? %s %s %%\n", str, ""));

	printf("\n\nTEST 3\n\n");
	printf("Return du mien : \n");
	ft_printf("%d\n", ft_printf("%d, %d\n", d, e));
	printf("Return du vrai : \n");
	printf("%d\n", printf("%d, %d\n", d, e));

	printf("\n\nTEST 4\n\n");
	printf("Return du mien : \n");
	ft_printf("%d\n", ft_printf("%u, %u, %u, %u, %u\n", a, b, c, d, e));
	printf("Return du vrai : \n");
	printf("%d\n", printf("%u, %u, %u, %u, %u\n", a, b, c, d, e));

	printf("\n\nTEST 5\n\n");
	printf("Return du mien : \n");
	ft_printf("%d\n", ft_printf("%x, %x, %x, %X, %X, %X\n", 12, 0, 1289, 12, 0, 1289));
	printf("Return du vrai : \n");
	printf("%d\n", printf("%x, %x, %x, %X, %X, %X\n", 12, 0, 1289, 12, 0, 1289));

	printf("\n\nTEST 6\n\n");
	printf("Return du mien : \n");
	ft_printf("%d\n", ft_printf("%p, %p, %p\n", &a, &c, NULL));
	printf("Return du vrai : \n");
	printf("%d\n", printf("%p, %p, %p\n", &a, &c, NULL));

	return (0);
}

// Checker avec un % a la fin

