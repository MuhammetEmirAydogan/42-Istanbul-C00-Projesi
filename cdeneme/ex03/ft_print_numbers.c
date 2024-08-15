/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maydogan <maydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:40:01 by maydogan          #+#    #+#             */
/*   Updated: 2024/08/15 19:02:20 by maydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		decimal;

	decimal = 48;
	while (decimal < 58)
	{
		write(1, &decimal, 1);
		decimal++;
	}
}
