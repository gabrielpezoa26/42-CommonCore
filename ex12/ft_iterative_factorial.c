/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:00:31 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/06 14:07:23 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	potato;
	int	i;

	potato = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		potato = potato * i;
		i++;
	}
	return (potato);
}
/*
int     main()
{
	int     nb;

        nb = 5;
        printf("%d\n", ft_iterative_factorial(nb));
        return (0);
}*/
