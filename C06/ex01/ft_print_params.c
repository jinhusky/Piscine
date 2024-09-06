/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kationg <kationg@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:47:57 by kationg           #+#    #+#             */
/*   Updated: 2024/09/05 12:06:24 by kationg          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	new;
	int		i;
	int		y;

	i = 1;
	new = '\n';
	while (i < argc)
	{
		y = 0;
		while (argv[i][y] != '\0')
		{
			write(1, &argv[i][y], 1);
			y++;
		}
		write (1, &new, 1);
		i++;
	}
}
