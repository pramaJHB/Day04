/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prama <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 08:50:07 by prama             #+#    #+#             */
/*   Updated: 2020/06/24 16:12:18 by prama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fac;
	
	i = 1;
	fac = 1;

	if(nb < 0 || nb > 12)
	{
		return(0);
	}
	if(nb == 0)
	{
		return(1);
	}
	while(i <= nb)
	{
		fac = fac * i;
		i++;
	}
	return (fac);
}
/*
int	main()
{
	int a;
	
	a = 5;
	
	printf("%d\n", ft_iterative_factorial(a));
	return(0);
}
*/
