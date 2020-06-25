/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iteravtive_power.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prama <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:42:07 by prama             #+#    #+#             */
/*   Updated: 2020/06/25 12:53:07 by prama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int i;
	int count;

	i = 0;
	count = 1;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);

	while (i < power)
	{
		count = count * nb;
		i++;
	}
	return (count);
}
/*
int	main()
{
	int n;
	int p;
	n = 5;
	p = 2;

	printf("%d\n", ft_iterative_power(n, p));
			return (0);
}
*/
