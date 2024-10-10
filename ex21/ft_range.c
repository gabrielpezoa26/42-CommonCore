/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:13:17 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/10 10:29:48 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*dest;

	i = 0;
	dest = (int *)malloc((max - min) * sizeof(int));
	while ((min + i) < max)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}

int	main(void)
{
	int	*potato;
	int	min;
	int	max;
	int	i;

	min = 1;
	max = 10;
	i = 0;
	potato = ft_range(min, max);
	while (i != (max - min))
	{
		printf("%d\n", potato[i]);
		i++;
	}
	return (0);
}
