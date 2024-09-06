/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kationg <kationg@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:49:04 by kationg           #+#    #+#             */
/*   Updated: 2024/09/05 15:38:44 by kationg          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	print_parameter(int argc, char *argv[])
{
	int		i;
	char	new;
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
		write(1, &new, 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	temp[999];

	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (j < argc - 1 - i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				ft_strcpy(temp, argv[j]);
				ft_strcpy(argv[j], argv[j + 1]);
				ft_strcpy(argv[j + 1], temp);
			}
			j++;
		}
		i++;
	}
	print_parameter(argc, argv);
}
