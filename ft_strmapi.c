/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbeceren <kbeceren@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:03:31 by kbeceren          #+#    #+#             */
/*   Updated: 2022/07/13 14:03:45 by kbeceren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
* 	Applies the function ’f’ to each character of the ’s’ to create a new 
*	string (with malloc) resulting from successive applications of ’f’.
*	PARAMETERS
*	#1. The string on which to iterate.
*	#2. The function to apply to each character.
*	RETURN VALUES
*	The string created from the successive applications of ’f’. 
*	Returns NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s2;

	i = 0;
	if (!s || !f)
		return (NULL);
	s2 = (char *)malloc(sizeof(*s2) * (ft_strlen(s) + 1));
	if (!s2)
		return (NULL);
	while (s[i])
	{
		s2[i] = (*f)(i, s[i]);
		++i;
	}
	s2[i] = '\0';
	return (s2);
}
