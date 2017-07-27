/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 11:07:49 by msteffen          #+#    #+#             */
/*   Updated: 2017/07/07 10:15:15 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_numbers(void)
{
	char current_char;

	current_char = '0';
	while (current_char <= '9')
	{
		ft_putchar(current_char);
		current_char--;
	}
}
