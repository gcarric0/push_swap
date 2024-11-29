/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrico <gcarrico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:48:58 by gcarrico          #+#    #+#             */
/*   Updated: 2024/11/29 13:27:08 by gcarrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <limits.h>
#include <stdbool.h>
#include "../push_swap/printlib/ft_printf.h"

typedef struct s_stack_node
{
    int nbr;
    int index;
    int cost;
    bool cheapest;
    bool average;

    struct s_stack_node *next;
    struct s_stack_node *prev;
    struct s_stack_node *target;
} t_stack_node;

#endif
