/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 09:38:56 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/04 15:03:09 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	square_root;
	int	result;

	square_root = 0;
	while (nb > 0)
	{
		result = square_root * square_root;
		if (result == nb)
			return (square_root);
		else if (result > nb)
			return (0);
		square_root++;
	}
	return (0);
}
/*
int	main()
{
	int	nb;

	nb = 81;
	//nb = 0;
	//nb = -12;
	printf("%d\n", ft_sqrt(nb));
	return (0);
}*/
