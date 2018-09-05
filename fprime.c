/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnqabash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 09:30:05 by lnqabash          #+#    #+#             */
/*   Updated: 2018/09/05 09:43:02 by lnqabash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char	**argv)
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
		if (nbr1 == 1)
		{
			printf("%d\n", nbr1);
			return (0);
		}
		while (result != nbr1)
		{
			if (nbr2 % index == 0)
			{
				printf("%d", index);
				result *= index;
				nbr2 /= index;
				while (nbr2 % index == 0)
				{
					printf("*");
					printf("%d", index);
					result *= index;
					nbr2 /= index;
				}
				if (nbr1 == result)
					break;
				printf("*");
			}
			index++;
		}
		printf("\n");
	}
	return (0);
}
