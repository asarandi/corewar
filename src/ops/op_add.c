/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 08:07:11 by sgardner          #+#    #+#             */
/*   Updated: 2018/11/03 10:48:01 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

t_bool	op_add(t_core *core, t_proc *p, t_instr *instr)
{
	t_uint	*dst;

	dst = (t_uint *)instr->args[2];
	*dst = read_arg(core, p, 0) + read_arg(core, p, 1);
	return (!*dst);
}
