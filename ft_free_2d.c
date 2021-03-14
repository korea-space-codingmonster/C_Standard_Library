/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_2d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <napark@studenst.42seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 22:26:35 by napark            #+#    #+#             */
/*   Updated: 2021/03/13 22:30:08 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_free_2d(char **str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        free(str[i]);//각 할당된 문자열의 메모리를 해제
        i++;
    }
    free(str);
}