/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 04:43:19 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/14 05:07:25 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

typedef	struct	s_perso
{
	char	*name;
	float	life;
	int		age;
	int		profession;
}				t_perso;

enum				e_prof { SAVE_AUSTIN_POWERS };

#endif
