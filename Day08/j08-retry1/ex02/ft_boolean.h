/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 00:50:32 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/18 00:58:06 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

# define SUCCESS 1

enum	e_bool { FALSE, TRUE };
typedef enum e_bool		t_bool;

# define EVEN(x)	((x % 2 == 0) ? (TRUE) : (FALSE))

t_bool	ft_is_even(int nbr);

#endif
