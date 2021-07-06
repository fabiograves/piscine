/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgraves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:22:20 by fgraves           #+#    #+#             */
/*   Updated: 2021/07/06 12:46:51 by fgraves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	long int temp;

	temp = nb;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		temp = temp * (nb - 1);
		nb--;
	}
	return (temp);
}
