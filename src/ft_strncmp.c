/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 22:07:24 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/29 20:25:13 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	c = 1;
	if (n == 0 || (!s1 || !s2))
		return (0);
	while (c < n && *s1 && *s2)
	{
		if (*(unsigned char *)s1 == *(unsigned char *)s2)
		{
			s1++;
			s2++;
			c++;
		}
		else
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
