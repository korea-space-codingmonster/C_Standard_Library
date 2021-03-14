/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_longest_node_len.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <napark@studenst.42seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 01:23:53 by napark            #+#    #+#             */
/*   Updated: 2021/03/14 01:23:53 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_longest_node_len(t_list *lst)
{
    int max;//개수를 세기 위한 변수

    max = -1;
    while (lst)//lst의 마지막이 될때까지
    {
        if (max < ft_strlen((char *)lst->content))
            max = ft_strlen((char *)lst->content);
        lst = lst->next;
    }
    return (max);
}