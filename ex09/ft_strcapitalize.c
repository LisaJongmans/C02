/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljongman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 08:53:27 by ljongman          #+#    #+#             */
/*   Updated: 2019/07/12 10:11:32 by ljongman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	ft_strupcase(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90)
		&& ((str[i - 1] >= 65 && str[i - 1] <= 90)
		|| (str[i - 1] >= 97 && str[i - 1] <= 122)
		|| (str[i - 1] >= 48 && str[i - 1] <= 57)))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		main(void)
{
	char str[] = "Hi^36ae[Z}>dw i am s4Rf van";

	ft_strcapitalize(str);
	return (0);
}
