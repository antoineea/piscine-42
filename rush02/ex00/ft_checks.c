/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 20:59:31 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/23 21:20:35 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	check_colle0(int a, int b, int h, int l)
{
	if ((a == 0 && b == 0) || (a == h && b == 0))
		return ('o');
	else if (b == l && (a == 0 || a == h))
		return ('o');
	else if (b == 0 || b == l)
		return ('|');
	else if (a == 0 || a == h)
		return ('-');
	else
		return (' ');
	return (0);
}

char	check_colle1(int a, int b, int h, int l)
{
	if (a == 0 && b == 0)
		return ('/');
	else if (a == h && b == 0)
		return ('\\');
	else if (b == l && a == 0)
		return ('\\');
	else if (b == l && a == h)
		return ('/');
	else if (a == 0 || b == 0 || a == h || b == l)
		return ('*');
	else
		return (' ');
}

char	check_colle2(int a, int b, int h, int l)
{
	if (a == 0 && b == 0)
		return ('A');
	else if (a == h && b == 0)
		return ('C');
	else if (b == l && a == 0)
		return ('A');
	else if (b == l && a == h)
		return ('C');
	else if (a == 0 || b == 0 || a == h || b == l)
		return ('B');
	else
		return (' ');
}

char	check_colle3(int a, int b, int h, int l)
{
	if (a == 0 && b == 0)
		return ('A');
	else if (a == h && b == 0)
		return ('A');
	else if (b == l && a == 0)
		return ('C');
	else if (b == l && a == h)
		return ('C');
	else if (a == 0 || b == 0 || a == h || b == l)
		return ('B');
	else
		return (' ');
}

char	check_colle4(int a, int b, int h, int l)
{
	if (a == 0 && b == 0)
		return ('A');
	else if (a == h && b == 0)
		return ('C');
	else if (b == l && a == 0)
		return ('C');
	else if (b == l && a == h)
		return ('A');
	else if (a == 0 || b == 0 || a == h || b == l)
		return ('B');
	else
		return (' ');
}
