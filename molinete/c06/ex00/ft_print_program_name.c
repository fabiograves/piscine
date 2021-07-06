/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgraves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 09:49:33 by fgraves           #+#    #+#             */
/*   Updated: 2021/07/05 10:24:16 by fgraves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_print_program_name(int argc, char **argv)
{
	int i;

	i = 0;
	while(argv[0][i])
	{
		print(argv[0][i]);
		i++;
	}
	print('\n');
}

int	main(int argc, char **argv)
{
	ft_print_program_name(argc, argv);
	return (0);
}
