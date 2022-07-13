/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbeceren <kbeceren@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:30:15 by kbeceren          #+#    #+#             */
/*   Updated: 2022/07/13 12:09:40 by kbeceren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Allocates (with malloc) and returns a string representing the integer 
*	received as an argument. Negative numbers must be handled.
*	PARAMETERS
*	#1. the integer to convert.
*	RETURN VALUES
*	The string representing the integer. NULL if the allocation fails.
*/

#include "libft.h"

static size_t	ft_intlen(int n)
{
	unsigned int	i;

	i = 0;
	if (n <= 0)
		++i;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_addnbr(int n, char *s, int i)
{
	unsigned int	nbr;

	if (n < 0)
	{
		nbr = -n;
		s[0] = '-';
	}
	else
		nbr = n;
	if (nbr >= 10)
	{
		ft_addnbr(nbr / 10, s, i - 1);
		nbr = nbr % 10;
	}
	if (nbr < 10)
	{
		s[i - 1] = nbr + '0';
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s_int;
	size_t	i;

	i = ft_intlen(n);
	s_int = (char *)malloc(sizeof(*s_int) * (i + 1));
	if (NULL == s_int)
		return (NULL);
	ft_addnbr(n, s_int, i);
	s_int[i] = '\0';
	return (s_int);
}
