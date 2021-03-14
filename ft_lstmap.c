/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <napark@studenst.42seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 01:58:38 by napark            #+#    #+#             */
/*   Updated: 2021/03/14 02:00:27 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** - Iterates the list 'lst' and applies function 'f' to the content of
**   each element.
** - 'del' function is used to delete the content of an element if needed.
** - Returns the new list, or NULL if the allocation fails
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_head;
	t_list *tmp;
	t_list *curr;

	if (lst == NULL || (new_head = ft_lstnew(f(lst->content))) == NULL)
		return (NULL);
	curr = new_head;
	tmp = lst->next;
	while (tmp)
	{
		if ((curr->next = ft_lstnew(f(tmp->content))) == NULL)
		{
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		curr = curr->next;
		tmp = tmp->next;
	}
	return (new_head);
}

/*
** line 38 : Changed statement from 'break' to 'return NULL'
** line 29 : Removed 'f == NULL || del == NULL' from if condition
*/
//리스트 lst를 반복하여 각 요소의 content에 f함수를 적용한다.
//함수 f에 계속해서 적용 후 나온 결과값을 새로운 리스트로 생성한다.
//del함수는 필요시 요소의 content를 삭제하는데 사용된다.