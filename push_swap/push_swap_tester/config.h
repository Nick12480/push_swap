/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 15:18:20 by jbuchins          #+#    #+#             */
/*   Updated: 2026/01/01 18:36:20 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONFIG_H
# define CONFIG_H

// Please fill in these configs.
// First your header and dir.
#include "../push_swap.h"
#include "../libft/libft.h"

// Second fill in your structname that these operations use.
typedef t_stack USER_NODE;

// Third fill in what the next element in this struct is called.
#define USER_NEXT(n) ((n)->next)//<-right here

// Lastly if your functions are called any different then listed below
// then please edit the name so it matches your functions.

#define USER_SA sa
#define USER_SB sb
#define USER_SS ss
#define USER_PA pa
#define USER_PB pb
#define USER_RA ra
#define USER_RB rb
#define USER_RR rr
#define USER_RRA rra
#define USER_RRB rrb
#define USER_RRR rrr

#endif