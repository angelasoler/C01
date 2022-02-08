/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:36:46 by asoler            #+#    #+#             */
/*   Updated: 2022/02/08 18:41:25 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

void	ft_strlen(char *str)
{
	int index;
	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	if  (str[index] == '\0')
	{
		index += 1;
		
	}
}

int	main()
{
	char str1[6] = "Marvin";
	
	// str1[6] = "Marvin";
	// {'M', 'a', 'r', 'v', 'i', 'n'};
	
	ft_putstr(str1);
}

