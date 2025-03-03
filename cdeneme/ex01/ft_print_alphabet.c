/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maydogan <maydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:05:36 by maydogan          #+#    #+#             */
/*   Updated: 2024/08/15 18:13:04 by maydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
    // 'letter' değişkenini 'a' harfiyle başlatıyorum.
    int letter = 'a';

    // Burada 'letter' değişkeni 'z' harfine kadar dönecek.
    while (letter <= 'z')
    {
        // 'write' fonksiyonu ile ekrana 'letter' değişkeninin içeriğini yazdırıyorum.
        // 1, standart çıkışı (ekran) temsil eder, &letter ise 'letter' değişkeninin adresidir.
        write(1, &letter, 1);
        
        // 'letter' değişkenini bir sonraki harfe geçirmek için arttırıyorum.
        letter++;
    }
}

