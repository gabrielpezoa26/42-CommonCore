/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:44:10 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/09 13:21:48 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>                    //teste
#include <stdio.h>                    //teste
void	ft_putchar(char c)           //teste
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*
char	*ft_strdup(char *src)
{
	
}*/

int	main(void)
{
	char	potato[] = "aaaaaaaa";
	
	printf("%d", ft_strlen(potato));

}
