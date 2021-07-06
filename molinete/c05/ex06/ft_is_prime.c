/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgraves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 13:22:30 by fgraves           #+#    #+#             */
/*   Updated: 2021/07/06 16:35:24 by fgraves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	long int i;

	i = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (i * i < nb)
	{
		if (nb % 2 == 0)
			return (0);
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
