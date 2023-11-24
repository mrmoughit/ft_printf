/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:53:34 by abechcha          #+#    #+#             */
/*   Updated: 2023/11/24 17:55:02 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_adress(unsigned long long n)
{
	int		r;
	char	*base;

	r = 0;
	base = "0123456789abcdef";
	if (n >= 16)
	{
		r += ft_print_adress(n / 16);
		r += ft_print_adress(n % 16);
	}
	else
		r += ft_putchar(base[n]);
	return (r);
}
