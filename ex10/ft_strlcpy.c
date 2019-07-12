/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljongman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 12:40:05 by ljongman          #+#    #+#             */
/*   Updated: 2019/07/12 12:57:58 by ljongman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count] != '\0')
		count++;
	while (i < n)
	{
		if ((i < n - 1) && (src[i] != '\0'))
			dest[i] = src[i];
		else
		{
			dest[i] = '\0';
			return (count);
		}
		i++;
	}
	return (count);
}

int				main(void)
{
	char			str1[] = "luna";
	char			str2[] = "hellogoodbye";
	unsigned int	n;

	n = 7;
	ft_strlcpy(str2, str1, n);
	return (0);
}
