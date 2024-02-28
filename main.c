/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:28:02 by akaratas          #+#    #+#             */
/*   Updated: 2023/12/10 17:28:02 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	printf("-----------------------------------\n");

	int clen = printf("char = %%%c 123 %k\n", 'h', "seb");
	printf("clen = %d\n\n", clen);

	int ft_clen = ft_printf("char = %%%c 123 %k\n", 'h', "seb");
	ft_printf("ft_clen = %d\n", ft_clen);

	printf("-----------------------------------\n");

	int slen = printf("str = %s\n", "abc");
	printf("slen = %d\n\n", slen);

	int ft_slen = ft_printf("str = %s\n", "abc");
	ft_printf("ft_slen = %d\n", ft_slen);

	printf("-----------------------------------\n");

	int dlen = printf("int = %d\n", 21474836500);
	printf("dlen = %d\n\n", dlen);

	int ft_dlen = ft_printf("int = %d\n", 21474836500);
	ft_printf("ft_dlen = %d\n", ft_dlen);

	printf("-----------------------------------\n");

	int ulen = printf("unsigned int = %u\n", -5);
	printf("ulen = %d\n\n", ulen);

	int ft_ulen = ft_printf("unsigned int = %u\n", -5);
	ft_printf("ft_ulen = %d\n", ft_ulen);

	printf("-----------------------------------\n");

	char *ptr1 = "43samsun";
	char *ptr = "simple man, sample life";

	int plen = printf("%p\n", ptr1);
	printf("plen = %d\n\n", plen);

	int ft_plen = ft_printf("%p\n", ptr1);
	printf("ft_plen = %d\n\n", ft_plen);

	printf("-----------------------------------\n");

}
