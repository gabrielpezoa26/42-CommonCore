/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:37:46 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/03 16:11:59 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	digit;

	digit = 48;
	while (digit <= 57)
	{
		ft_putchar(digit);
		digit++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return 0;
}*/
