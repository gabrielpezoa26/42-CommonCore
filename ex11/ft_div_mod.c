/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:12:42 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/03 16:18:09 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int a, b;
	int div, mod;

	a = 10;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("division: %d\n ", div);
	printf("modulus: %d ", mod);
	return 0;
}*/
