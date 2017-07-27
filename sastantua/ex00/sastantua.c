/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:25:46 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/09 14:36:16 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		sastantua_nb_of_spaces(int size)
{
	int current_section;
	int nb_spaces;
	int current_offset;
	int increase_offset;

	current_section = 0;
	nb_spaces = 0;
	current_offset = 3;
	increase_offset = 0;
	while (current_section < size)
	{
		nb_spaces += (3 + current_section) - 1;
		nb_spaces += current_offset;
		current_section++;
		if (increase_offset)
		{
			current_offset++;
			increase_offset = 0;
		}
		else
			increase_offset = 1;
	}
	if (!increase_offset)
		nb_spaces++;
	return (nb_spaces - current_offset);
}

void	sastantua_print(char c, int nb, char sx, char sx2)
{
	int i;

	i = 0;
	while (i++ < nb)
		ft_putchar(c);
	if (sx != 0)
		ft_putchar(sx);
	if (sx2 != 0)
		ft_putchar(sx2);
}

int		sastantua_stars_on_last_line(int size)
{
	int current_section;
	int current_line;
	int star_count;
	int offset;

	if (size == 1)
		return (-8);
	current_section = 0;
	star_count = 1;
	offset = 3;
	while (current_section++ < size)
	{
		current_line = 0;
		while (current_line++ < current_section + 3)
		{
			if (current_section == size - 1 && current_line == size + 1)
				return (star_count);
			star_count += 2;
		}
		if (current_section != 0 && current_section % 2 == 0)\
			offset += 2;
		star_count += offset + 1;
	}
	return (star_count);
}

void	sastantua_door(int size, int section, int line, int star_count)
{
	int st_l;

	st_l = sastantua_stars_on_last_line(size);
	if (size % 2 == 0 && section == size - 1 && line >= 3)
	{
		sastantua_print('*', ((star_count - (size - 1)) / 2), 0, 0);
		if (size >= 5 && line == ((size + 7) - 3) / 2)
			sastantua_print('|', (size - 3), '$', '|');
		else
			sastantua_print('|', (size - 1), 0, 0);
		sastantua_print('*', ((star_count - (size - 1)) / 2), 0, 0);
	}
	else if (size % 2 == 1 && section == size - 1 && line >= 2)
	{
		sastantua_print('*', ((st_l - size) / 2) - size + line + 5, 0, 0);
		if (size >= 5 && line == ((size + 7) - 3) / 2)
			sastantua_print('|', (size - 2), '$', '|');
		else
			sastantua_print('|', size, 0, 0);
		sastantua_print('*', ((st_l - size) / 2) - size + line + 5, 0, 0);
	}
	else
		sastantua_print('*', star_count, 0, 0);
}

void	sastantua(int size)
{
	int current_section;
	int current_line;
	int padding;
	int star_count;
	int offset;

	current_section = -1;
	padding = sastantua_nb_of_spaces(size);
	star_count = 1;
	offset = 3;
	while (++current_section < size)
	{
		current_line = -1;
		while (++current_line < current_section + 3)
		{
			sastantua_print(' ', padding - current_line, '/', 0);
			sastantua_door(size, current_section, current_line, star_count);
			sastantua_print('\\', 1, '\n', 0);
			star_count += 2;
		}
		if (current_section != 0 && current_section % 2 == 0)
			offset++;
		star_count += offset + 1 + (offset - 3);
		padding -= (current_section + 3) + (offset - 1);
	}
}
