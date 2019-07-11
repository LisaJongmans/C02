/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljongman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 15:40:39 by ljongman          #+#    #+#             */
/*   Updated: 2019/07/11 17:59:55 by ljongman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 32 && str[i] < 126)
			i++;
		else
			return (0);
	}
	return (1);
}

int		main(void)
{
	char str2[] = "Hi";

	ft_str_is_printable(str2);
	return (0);
}
