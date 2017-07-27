/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 00:17:12 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/16 11:36:01 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match_recurs(char *str, char *pattern, int str_index, int pat_index)
{
	if (!str[str_index] && !pattern[pat_index])
		return (1);
	else if (str[str_index] == pattern[pat_index] && pattern[pat_index] != '*')
		return (match_recurs(str, pattern, str_index + 1, pat_index + 1));
	else if (pattern[pat_index] == '*' && !str[str_index])
		return (match_recurs(str, pattern, str_index, pat_index + 1));
	else if (pattern[pat_index] == '*' && str[str_index] && pattern[pat_index])
		return (match_recurs(str, pattern, str_index, pat_index + 1)
		+ match_recurs(str, pattern, str_index + 1, pat_index));
	else
		return (0);
}

int		nmatch(char *s1, char *s2)
{
	return (match_recurs(s1, s2, 0, 0));
}
