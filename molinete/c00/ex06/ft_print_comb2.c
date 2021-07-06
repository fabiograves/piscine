/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgraves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:26:33 by fgraves           #+#    #+#             */
/*   Updated: 2021/07/05 17:27:53 by fgraves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	atoi(int a, int b)
{
	int c;

	c = (a / 10) + 48;
	print(c);
	c = (a % 10) + 48;
	print(c);
	print(' ');
	c = (b / 10) + 48;
	print(c);
	c = (b % 10) + 48;
	print(c);
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;

	while (a < 99)
	{
		b = a;
		while (b <= 99)
		{
			if (a != b)
			{
				atoi(a, b);
				if (a != 98 || b != 99)
				{
					print(',');
					print(' ');
				}
			}
			b++;
		}
		a++;
	}
}
