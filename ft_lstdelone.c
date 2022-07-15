/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbeceren <kbeceren@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 14:02:37 by kbeceren          #+#    #+#             */
/*   Updated: 2022/07/15 14:42:32 by kbeceren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Takes as a parameter an element and frees the memory of the element’s 
*	content using the function ’del’ given as a parameter and free the element.
*	The memory of ’next’ must not be freed.
*	PARAMETERS
*	#1. The element to free.
*	#2. The address of the function used to delete the content.
*	RETURN VALUES
*	-
*/

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{	
		del(lst->content);
		free(lst);
	}
}
