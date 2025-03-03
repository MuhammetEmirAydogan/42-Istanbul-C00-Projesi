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

void ft_print_numbers(void)
{
    // 'decimal' değişkenini '0' rakamının ASCII değeri olan 48 ile başlatıyorum.
    int decimal = 48;

    // Burada 'decimal' değişkenini 57'ye kadar artıracağım, çünkü '9' rakamının ASCII değeri 57'dir.
    while (decimal < 58)
    {
        // 'write' fonksiyonunu kullanarak, 'decimal' değişkeninin ASCII değeri olan karakteri ekrana yazdırıyorum.
        // 1, çıktının ekrana (standart çıkış) yazdırılacağını belirtir.
        // &decimal, yazdırılacak olan sayının bellekteki adresini belirtir.
        write(1, &decimal, 1);

        // 'decimal' değişkenini bir sonraki rakama geçirecek şekilde arttırıyorum.
        decimal++;
    }
}

