/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adapter.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuchins <jbuchins@student.42Wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 15:37:48 by jbuchins          #+#    #+#             */
/*   Updated: 2025/12/31 21:16:18 by jbuchins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "config.h"


typedef USER_NODE t_nodes;

#define nextof(n) (USER_NEXT(n))

#define OPA(name, call) static inline void name(t_nodes ** A, t_nodes ** B) { (void)B; call(A); }
#define OPB(name, call) static inline void name(t_nodes ** A, t_nodes ** B) { (void)A; call(B); }
#define OP2(name, call) static inline void name(t_nodes ** A, t_nodes ** B) { call(A,B); }

//SWAP
OPA(op_sa, USER_SA)
OPB(op_sb, USER_SB)
OP2(op_ss, USER_SS)
//ROTATE
OPA(op_ra, USER_RA)
OPB(op_rb, USER_RB)
OP2(op_rr, USER_RR)
//REVERSE ROTATE
OPA(op_rra, USER_RRA)
OPB(op_rrb, USER_RRB)
OP2(op_rrr, USER_RRR)
//PUSH
OP2(op_pa, USER_PA)
OP2(op_pb, USER_PB)




