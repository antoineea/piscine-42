/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 15:58:02 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/17 22:24:03 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		skip(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char	**ft_split_whitespaces_uno(char *str, char **final_arr)
{
	int len;
	int i;

	i = 0;
	len = 0;
	while (str[i])
	{
		while (str[i] && skip(str[i]))
			i++;
		while (str[i] && !skip(str[i]))
			i++;
		len++;
		while (str[i] && skip(str[i]))
			i++;
	}
	final_arr = (char**)malloc(sizeof(char*) * (len + 1));
	return (final_arr);
}

char	**ft_split_whitespaces_dos(char *str, char **final_arr)
{
	int i;
	int curr;
	int len;

	len = 0;
	curr = 0;
	i = 0;
	while (str[i])
	{
		len = 0;
		while (str[i] && skip(str[i]))
			i++;
		while (str[i] && !skip(str[i]))
		{
			len++;
			i++;
		}
		final_arr[curr] = (char*)malloc(sizeof(char) * (len + 1));
		curr++;
		while (str[i] && skip(str[i]))
			i++;
	}
	return (final_arr);
}

char	**ft_split_whitespaces_tres(char *str, char **final_arr)
{
	int i;
	int curr;
	int index;

	i = 0;
	curr = 0;
	index = 0;
	while (str[i])
	{
		while (str[i] && skip(str[i]))
			i++;
		index = 0;
		while (str[i] && !skip(str[i]))
		{
			final_arr[curr][index] = str[i];
			i++;
			index++;
		}
		final_arr[curr][index] = '\0';
		curr++;
		while (str[i] && skip(str[i]))
			i++;
	}
	final_arr[curr] = 0;
	return (final_arr);
}

char	**ft_split_whitespaces(char *str)
{
	char	**final_arr;
	int		i;
	int		len;
	int		curr;

	final_arr = 0;
	i = 0;
	len = 0;
	curr = 0;
	final_arr = ft_split_whitespaces_uno(str, final_arr);
	final_arr = ft_split_whitespaces_dos(str, final_arr);
	final_arr = ft_split_whitespaces_tres(str, final_arr);
	return (final_arr);
}
