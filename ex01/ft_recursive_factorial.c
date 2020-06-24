/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prama <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 16:14:27 by prama             #+#    #+#             */
/*   Updated: 2020/06/24 16:24:44 by prama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if(nb < 0 || nb > 12)
	{
		return(0);
	}
	if(nb >= 1)
	{
		return(nb * ft_recursive_factorial(nb - 1));
	}
	else
	{
		return(1);
	}
}
/*
int	main()
{
	int a;
	
	a = 6;
	
	printf("%d\n", ft_recursive_factorial(a));
	return(0);
}*/

