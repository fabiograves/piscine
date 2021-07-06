/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgraves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 12:02:27 by fgraves           #+#    #+#             */
/*   Updated: 2021/07/06 13:09:40 by fgraves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fib(int number, int first, int second)
{
	if (number == 0)
		return (first);
	if (number == 1)
		return (second);
	return (fib(number - 1, second, first + second));
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	return (fib(index, 0, 1));
}
