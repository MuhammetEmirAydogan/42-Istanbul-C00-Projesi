/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maydogan <maydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:03:46 by maydogan          #+#    #+#             */
/*   Updated: 2024/08/15 14:04:09 by maydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb (void)
{
    int a;
    int b;
    int c;
    a ='0'
    while(a<='7')
    {
        while
         b = a+1;
        while(b<='8')
        {
            while
            c = b+1;
            while(c<='9')
            {
                write(1,&a,1);
                write(1,&b,1);
                write(1,&c,1);
                if(a != '7')
                 write(1,", ",2);
                c++;
            }
            b++;
        }
        a++;
    }
}
int main()
{
    ft_print_comb();
    return (0);
}
