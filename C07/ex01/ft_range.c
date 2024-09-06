/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kationg <kationg@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:20:20 by kationg           #+#    #+#             */
/*   Updated: 2024/09/05 21:35:03 by kationg          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ints;
	int	i;
	int	length;

	if (min >= max)
		return (NULL);
	i = 0;
	length = max - min;
	ints = malloc(sizeof(int) * length);
	while (min < max)
	{
		ints[i] = min;
		min++;
		i++;
	}
	return (ints);
}
/*int main(void)
{
    int *ints = ft_range(1, 5);
    int i = 0;
    while (i < 4)
    {
        printf("%i", ints[i]);
        i++;
    }
}*/
