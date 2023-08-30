/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:18:30 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/29 20:56:41 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

#include "../../unity/src/unity.h"
#include "../../src/libft.h"

#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>

void	ft_toupper_tests(void);
void	ft_tolower_tests(void);
void	ft_isalpha_tests(void);
void	ft_isdigit_tests(void);
void	ft_isalnum_tests(void);
void	ft_isascii_tests(void);
void	ft_isprint_tests(void);
void	ft_atoi_tests(void);
void	ft_bzero_tests();
void	ft_itoa_tests();
void	ft_strchr_tests(void);
void	ft_strjoin_tests(void);
void	ft_strlen_tests(void);
void	ft_strtrim_tests(void);
void	ft_substr_tests(void);
void	ft_strlcpy_tests(void);
void	ft_strlcat_tests(void);
void	ft_strdup_tests(void);
void	ft_strncmp_tests(void);
void	ft_strnstr_tests(void);
void	ft_strrchr_tests(void);

#endif
