/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:23:17 by asoler            #+#    #+#             */
/*   Updated: 2022/02/08 01:51:35 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int n;
	int *n1;
	int **n2;
	int ***n3;
	int ****n4;
	int *****n5;
	int ******n6;
	int *******n7;
	int ********n8;
	
	n = 15;
	n1 = &n;
	n2 = &n1;
	n3 = &n2;
	n4 = &n3;
	n5 = &n4;
	n6 = &n5;
	n7 = &n6;
	n8 = &n7;
	
	printf("%d", n);
	ft_ft(&n8);
	printf("%d", n);
}
