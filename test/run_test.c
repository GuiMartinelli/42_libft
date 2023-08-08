/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:17:58 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/08 11:02:55 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testsrc/test.h"

void setUp (void) {}
void tearDown (void) {}

int	main(void) {
	ft_toupper_tests();
	ft_tolower_tests();
	ft_isalpha_tests();
	ft_isdigit_tests();
	ft_isalnum_tests();
	ft_isascii_tests();
	ft_isprint_tests();
	ft_atoi_tests();
	ft_bzero_tests();
	ft_itoa_tests();
	ft_strchr_tests();
	ft_strjoin_tests();
	return (0);
}
