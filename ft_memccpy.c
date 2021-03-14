/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <napark@studenst.42seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 02:02:12 by napark            #+#    #+#             */
/*   Updated: 2021/03/14 02:04:04 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** - Copies bytes from string 'src' to string 'dst'.
** - Stops copying when 'c' converted to an unsigned char occurs in 'src'
** - Returns a pointer to the byte after the copy of c in 'dst',
**   otherwise, returns a NULL pointer after n bytes are copied
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	int				occured;
	unsigned char	*usrc;

	usrc = (unsigned char *)src;
	i = 0;
	occured = 0;
	while (i < n && usrc[i] && !occured)
	{
		occured = ((usrc)[i] == (unsigned char)c) ? 1 : 0;
		i++;
	}
	if (occured)
	{
		ft_memcpy(dst, usrc, i);
		return (dst + i);
	}
	else
	{
		ft_memcpy(dst, usrc, n);
		return (0);
	}
}
