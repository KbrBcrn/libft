/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbeceren <kbeceren@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:10:22 by kbeceren          #+#    #+#             */
/*   Updated: 2022/07/11 15:51:40 by kbeceren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <ctype.h>
*	DESCRIPTION
*	The isascii() function tests for an ASCII character, which is any character 
*	between 0 and octal 0177 inclusive.
*	PARAMETERS
*	#1. The character to test.
*	RETURN VALUES
*	The isascii() function returns zero if the character tests false and returns 
*	non-zero if the character tests true.
*/
#include "libft.h"

int	ft_isascii(int c)
{
	if ((c < 0) || (c > 127))
		return (0);
	return (1);
}
