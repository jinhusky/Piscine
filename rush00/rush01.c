/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kationg <kationg@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:28:43 by kationg           #+#    #+#             */
/*   Updated: 2024/08/25 10:58:27 by kationg          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int w, int l)
{
	int	y;
	int	x;

	y = 1;
	while (y <= l)
	{
		x = 1;
		while (x <= w)
		{
			if ((x == 1 && y == 1) || (x == w && y == l && x > 1 && y > 1))
				ft_putchar('/');
			else if ((x == 1 && y == l) || (x == w && y == 1))
				ft_putchar('\\');
			else if (x == 1 || x == w || y == l || y == 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
