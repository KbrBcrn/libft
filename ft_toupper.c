/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbeceren <kbeceren@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:39:30 by kbeceren          #+#    #+#             */
/*   Updated: 2022/07/11 15:54:02 by kbeceren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <ctype.h>
*	DESCRIPTION
*	The toupper() function converts a lower-case letter to the corresponding 
*	upper-case letter. The argument must be representable as an unsigned char 
*	or the value of EOF.
*	PARAMETERS
*	#1. The character to convert.
*	RETURN VALUES
*	If the argument is a lower-case letter, the toupper() function returns the 
*	corresponding upper-case letter if there is one; otherwise, the argument is 
*	returned unchanged.
*/
#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c = c - 32;
	return (c);
}
