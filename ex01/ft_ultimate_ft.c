/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:23:17 by asoler            #+#    #+#             */
/*   Updated: 2022/02/07 19:59:35 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int *nbr;
	int **nbr;
	int ***nbr;
	int ****nbr;
	int *****nbr;
	int ******nbr;
	int *******nbr;
	int ********nbr;
	int *********nbr;
	
	

	**nbr = *nbr;
	***nbr = ****nbr;
	****nbr = *****nbr;
	*****nbr = ******nbr;
	******nbr = *******nbr;
	*******nbr = ********nbr;
	********nbr = *********nbr;
	*********nbr = 15;
	
	printf("%d", *********nbr);
	ft_ft(*********nbr);
	printf("%d", *********nbr);
}
