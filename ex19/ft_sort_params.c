/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:47:00 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/10 12:02:48 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

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

void	ft_print(char *s1)
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

void	ft_swap(char **s1, char **s2)
{
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
	while (j < argc)
	{
		i = 1;
		while (i < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				ft_swap(&argv[i], &argv[j]);
			}
			i++;
		}
		j++;
	}
	j = 1;
	while (j < argc)
	{
		ft_print(argv[j]);
		j++;
	}
	return (0);
}
