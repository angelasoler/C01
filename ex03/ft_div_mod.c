/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:04:35 by asoler            #+#    #+#             */
/*   Updated: 2022/02/08 14:59:53 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int d;
	int m;

	d = a/b;
	m = a%b;
	
	*div = d; 
	// -> endereço de d e m só existe dentro dessa função
	*mod = m;
}

int	main(void)
{
	int a;
	int c;
	
	ft_div_mod(10, 5, &a, &c);
	printf("%d%d", a, c);
}