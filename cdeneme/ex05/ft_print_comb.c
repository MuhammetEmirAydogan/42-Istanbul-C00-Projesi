/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maydogan <maydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:03:51 by maydogan          #+#    #+#             */
/*   Updated: 2024/08/15 14:04:07 by maydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)
{
    int a;
    int b;
    int c;

    a = '0';  // 'a' harfini '0' olarak başlatıyorum.
    while (a <= '7')  // 'a' '7' harfine kadar ilerleyecek.
    {
        b = a + 1;  // 'b', 'a' harfinden bir fazla olacak şekilde başlatıyorum.
        while (b <= '8')  // 'b' '8' harfine kadar ilerleyecek.
        {
            c = b + 1;  // 'c', 'b' harfinden bir fazla olacak şekilde başlatıyorum.
            while (c <= '9')  // 'c' '9' harfine kadar ilerleyecek.
            {
                // 'a', 'b' ve 'c' harflerini sırasıyla ekrana yazdırıyorum.
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);

                // Sonuçta sadece '7' kombinasyonu sonrası virgül ve boşluk yazdırmıyorum.
                if (a != '7')
                    write(1, ", ", 2);  // Virgül ve boşluk ekliyorum.

                c++;  // 'c'yi bir arttırıyorum.
            }
            b++;  // 'b'yi bir arttırıyorum.
        }
        a++;  // 'a' yı bir arttırıyorum.
    }
}
