/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maydogan <maydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:38:24 by maydogan          #+#    #+#             */
/*   Updated: 2024/08/15 19:38:46 by maydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
    // Burada 'n' pozitif ya da sıfır mı diye kontrol ediyorum.
    if (n >= 0)
        // Eğer 'n' pozitif veya sıfırsa, "P" harfini ekrana yazdırıyorum (pozitif).
        write(1, "P", 1);
    else
        // Eğer 'n' negatifse, "N" harfini ekrana yazdırıyorum (negatif).
        write(1, "N", 1);
}

