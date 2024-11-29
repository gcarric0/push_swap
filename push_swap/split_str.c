/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrico <gcarrico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:21:53 by gcarrico          #+#    #+#             */
/*   Updated: 2024/11/29 13:48:06 by gcarrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int count_substr(char *str, char d)
{
    int count;
    bool check_sub;

    count = 0;
    while(*str)
    {
        check_sub = false;
        while(*str == d)
            ++str;
        while(*str != d && *str)
        {
            if(!check_sub)
            {
                ++count;
                check_sub = true;
            }
            ++str;
        }
    }
    return(count);
}
#include <stdio.h>

int main()
{
    char *str = "eu so u o gui";
    char d = ' ';
    int counter = count_substr(str,d);

    printf("%d",counter);
}
