/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <napark@studenst.42seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 02:07:56 by napark            #+#    #+#             */
/*   Updated: 2021/03/14 02:09:33 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** - Locates first occurrence of 'c'(converted to unsigned char) in 's'.
** - Returns a pointer to the byte located, or NULL if no such byte exists
**   within 'n'.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*my_s;

	my_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (my_s[i] == (unsigned char)c)
			return (my_s + i);
		i++;
	}
	return (0);
}