/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:47:00 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/10 10:24:11 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_printg(char *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		ft_putchar(s1[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_swapg(char *s1[], char *s2[])
{
	int		i;
	int		j;
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	while (argc > j)
	{
		i = 1;
		while (argc > i)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				ft_swapg(&argv[i], &argv[j]);
			}
			i++;
		}
		j++;
	}
	j = 1;
	while (argc > j)
	{
		ft_printg(argv[j]);
		j++;
	}
	return (0);
