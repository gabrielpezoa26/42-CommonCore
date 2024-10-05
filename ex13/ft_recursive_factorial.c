/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:08:47 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/05 14:59:01 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if  (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (1);
}

int     main()
{
        int     nb;

        nb = 7;
        printf("%d", ft_recursive_factorial(nb));
        return (0);
}
