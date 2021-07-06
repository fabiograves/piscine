/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgraves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 10:25:19 by fgraves           #+#    #+#             */
/*   Updated: 2021/07/05 10:34:45 by fgraves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_rev_params(int argc, char **argv)
{
	int i;
	int j;
	int k;

	j = argc - 1;
	i = 0;
	while(j > 0)
	{
		while(argv[j][i])
		{
			print(argv[j][i]);
			i++;
		}
		i = 0;
		print('\n');
		j--;
	}
}

int	main(int argc, char **argv)
{
	ft_rev_params(argc, argv);
	return (0);
}
