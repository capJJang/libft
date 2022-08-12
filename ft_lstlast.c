/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 03:10:13 by segan             #+#    #+#             */
/*   Updated: 2022/07/26 03:10:13 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>


t_list	*ft_lstlast(t_list *lst)
{
	if (lst->next == NULL)
		return (lst);
	else
		return (ft_lstlast(lst->next));
}

/*
int main(void)
{
	char		*str = strdup("lorem");
	char		*str2 = strdup("ipsum");
	char		*str3 = strdup("dolor");
	char *content;

	t_list *lst = ft_lstnew(str3);
	ft_lstadd_front(&lst, ft_lstnew(str2));
	ft_lstadd_front(&lst, ft_lstnew(str));

	content = ft_lstlast(lst)->content;
	printf("%s", content);
}
*/