/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarageo <akarageo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:57:34 by akarageo          #+#    #+#             */
/*   Updated: 2023/12/21 20:12:35 by akarageo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dest, char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (src[i] && i < (n - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
	// while (i < n - 1 && src[i] != '\0')
	// {
	// 	dest[i] = src [i];
	// 	i++;
	// }
	// dest[i] = '\0';
	// while (src[i] != '\0')
	// {
	// 	i++;
	// }
	// return (i);