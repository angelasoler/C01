/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:07:12 by asoler            #+#    #+#             */
/*   Updated: 2022/02/08 15:43:05 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	auxa;
	int	auxb;

	auxa = *a;
	auxb = *b;
	*a = auxa / auxb;
	*b = auxa % auxb;
}
