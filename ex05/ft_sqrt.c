/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angarti <angarti@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:28:20 by angarti           #+#    #+#             */
/*   Updated: 2024/07/16 13:11:03 by angarti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 1)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		if (i * i > nb)
		{
			break ;
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_sqrt(16));  // kayrj3 4
    printf("%d\n", ft_sqrt(25));  // kayrj3 5
    printf("%d\n", ft_sqrt(26));  // kayrj3 0
    printf("%d\n", ft_sqrt(0));   // kayrj3 0
    printf("%d\n", ft_sqrt(-4));  // kayrj3 0
    return (0);
}*/
