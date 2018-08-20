/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnqabash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 11:50:27 by lnqabash          #+#    #+#             */
/*   Updated: 2018/08/17 12:00:26 by lnqabash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int		index;
	int		result;
	int		nbr1;
	int		nbr2;

	if (argc != 2)
		printf("\n");
	else
	{
		index = 2;
		result = 1;
		nbr1 = atoi(argv[1]);
		nbr2 = atoi(argv[1]);
		if (nbr2 == 1)
		{
			printf("%d", nbr2);
			return (0);
		}
		while (result != nbr1)
		{
			while (nbr2 % index == 0)
			{
				printf("%d", index);
				result *= index;
				nbr2 /= index;
				if (result == nbr1)
					break;
				printf("*");
			}
			index++;
		}
		printf("\n");
	}
	return (0);
}
