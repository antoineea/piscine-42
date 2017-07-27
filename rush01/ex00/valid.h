/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 12:09:32 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/16 15:45:38 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALID_H
# define VALID_H

int check_solution_block(int k, int table[9][9], int x, int y);
int	check_solution(int k, int table[9][9], int x, int y);
int	check_input(int table[9][9]);
int check_solution_block2(int k, int table[9][9], int x, int y);
int	check_solution2(int k, int table[9][9], int x, int y);

#endif
