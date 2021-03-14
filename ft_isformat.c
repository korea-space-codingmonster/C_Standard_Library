/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isformat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <napark@studenst.42seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 22:54:34 by napark            #+#    #+#             */
/*   Updated: 2021/03/13 23:05:10 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isformat(char *str, char *format)
{
    int		len_str;
	int		len_fmt;
	char	*fmt_of_str;

	len_str = ft_strlen(str);
	len_fmt = ft_strlen(format);
	if (len_str <= len_fmt)
		return (0);
	fmt_of_str = str + len_str - len_fmt;
	if (ft_strcmp(fmt_of_str, format) == 0)
		return (1);
	return (0);
}