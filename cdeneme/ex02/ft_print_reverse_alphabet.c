/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maydogan <maydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:32:39 by maydogan          #+#    #+#             */
/*   Updated: 2024/08/15 18:38:21 by maydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    // 'letter' değişkenini 'z' harfiyle başlatıyorum.
    int letter = 'z';

    // Burada 'letter' değişkeni 'a' harfine kadar dönecek.
    while (letter >= 'a')
    {
        // 'write' fonksiyonu ile 'letter' değişkeninin içeriğini ekrana yazdırıyorum.
        // 1, çıktının ekrana (standart çıkış) yazdırılacağını belirtir.
        // &letter, yazdırılacak olan harfin bellekteki adresini belirtir.
        write(1, &letter, 1);

        // 'letter' değişkenini bir önceki harfe geçirmek için azaltıyorum.
        letter--;
    }
}

