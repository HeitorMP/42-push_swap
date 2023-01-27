/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:03:49 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/27 14:10:28 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	is_not_numeric(int argc, char **argv, int from)
{
	int	index;
	int	index2;

	index = 0;
	if (from == 1)
		index++;
	index2 = 0;
	while (index < argc)
	{
		while (argv[index][index2] != '\0')
		{
			if (argv[index][index2] == '-' || argv[index][index2] == '+')
				index2++;
			if (argv[index][index2] < '0' || argv[index][index2] > '9')
				return (1);
			index2++;
		}
		index2 = 0;
		index++;
	}
	return (0);
}

static int	has_repeated(int argc, char **argv, int from)
{
	int	index;
	int	index2;

	index = 0;
	if (from == 1)
		index++;
	index2 = 0;
	while (index < argc)
	{
		index2 = index + 1;
		while (index2 < argc)
		{
			if (ft_cmp(ft_atoll(argv[index]), ft_atoll(argv[index2])) == 0)
				return (1);
			index2++;
		}
		index++;
	}
	return (0);
}

static int	is_out_of_int_range(int argc, char **argv, int from)
{
	long long	n;
	int			index;

	index = 0;
	if (from == 1)
		index++;
	while (index < argc)
	{	
		n = ft_atoll(argv[index]);
		if (n < -2147483648 || n > 2147483647)
			return (1);
		index++;
	}
	return (0);
}

int	has_init_errors(int argc, char **argv, int from)
{
	if (is_not_numeric(argc, argv, from))
		return (1);
	if (is_out_of_int_range(argc, argv, from))
		return (1);
	if (has_repeated(argc, argv, from))
		return (1);
	return (0);
}
