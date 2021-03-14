/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <napark@studenst.42seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 22:18:54 by napark            #+#    #+#             */
/*   Updated: 2021/03/13 22:26:14 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *res;

    res = (void *)malloc(count * size);//메모리 동적할당 메모리가 정해지지 않은 void형태 메모리를 count * size만큼 할당
    if (res == 0)
        return (0);//실패시 NULL 반환
    ft_memset(res, 0, count * size);//0을 채워서 할당
    return (res);
}