/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarageo <akarageo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:46:07 by akarageo          #+#    #+#             */
/*   Updated: 2023/12/20 18:43:55 by akarageo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *) b;
	while (len > 0)
	{
		*(tmp_ptr++) = (unsigned char) c;
		len--;
	}
	return (b);
}

// int main(void)
// {
// 	// Test ft_memset
// 	char str_ft[20];
// 	char str_memset[20];

// 	// Using ft_memset to fill str_ft with 'A'
// 	ft_memset(str_ft, 'A', sizeof(str_ft));

// 	// Using memset to fill str_memset with 'A'
// 	memset(str_memset, 'A', sizeof(str_memset));

// 	// Print the results
// 	printf("After ft_memset: %s\n", str_ft);
// 	printf("After memset   : %s\n", str_memset);
// 	// Compare the results
// 	if (strcmp(str_ft, str_memset) == 0)
// 	{
// 		printf("Both functions produced the same result.\n");
// 	}
// 	else
// 	{
// 		printf("The functions produced different results.\n");
// 	}

// 	return 0;
// }