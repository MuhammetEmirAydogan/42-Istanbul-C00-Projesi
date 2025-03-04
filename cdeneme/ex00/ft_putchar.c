/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maydogan <maydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:32:51 by maydogan          #+#    #+#             */
/*   Updated: 2024/08/15 17:37:22 by maydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    // 'write' fonksiyonunu kullanarak, 'c' karakterini ekrana yazdırıyorum.
    // 1, çıktının ekrana yönlendirileceğini belirtir (standart çıkış).
    // &c, yazdırılacak olan karakterin bellekteki adresidir.
    write(1, &c, 1);
}
