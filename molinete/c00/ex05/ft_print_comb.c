/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgraves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 16:58:41 by fgraves           #+#    #+#             */
/*   Updated: 2021/07/05 17:12:58 by fgraves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char buf[5];

	buf[0] = '0' - 1;
	buf[3] = ',';
	buf[4] = ' ';
	while (++buf[0] <= '6')
	{
		buf[1] = buf[0];
		while (++buf[1] <= '8')
		{
			buf[2] = buf[1];
			while (++buf[2] <= '9')
			{
				write(1, buf, 5);
			}
		}
	}
	write(1, "789", 3);
}
