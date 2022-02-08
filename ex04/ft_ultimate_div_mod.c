/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:07:12 by asoler            #+#    #+#             */
/*   Updated: 2022/02/08 15:20:32 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int auxa = *a;
	int auxb = *b;
	*a = auxa/auxb;
	*b = auxa%auxb;
}

int	main()
{
	int x = 15;
	int y = 5;
	
	ft_ultimate_div_mod(&x, &y);
	printf("x/y = %d \n x modulode y = %d", x, y);
}
