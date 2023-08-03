/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:48:14 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/03 17:21:55 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_isprint_printable_tests(void) {
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(' '));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint('1'));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint('g'));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint('?'));
}

void	ft_isprint_not_printable_tests(void) {
	TEST_ASSERT_EQUAL_INT(0, ft_isprint('\n'));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint('\r'));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint('\t'));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(0));
}

void	ft_isprint_tests(void) {
	UNITY_BEGIN();
	RUN_TEST(ft_isprint_printable_tests);
	RUN_TEST(ft_isprint_not_printable_tests);
	UNITY_END();
}