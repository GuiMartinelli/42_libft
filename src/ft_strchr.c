/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 22:25:49 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/08 10:33:37 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	while (s && *s != '\0')
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		else
			s++;
	}
	if (c == '\0')
		return ((char *)s);
	else
		return (NULL);
}
