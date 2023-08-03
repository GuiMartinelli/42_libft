/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:32:04 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/03 15:46:18 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_isascii_ascii_tests(void) {
	TEST_ASSERT_EQUAL_INT(1, ft_isascii('a'));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii('?'));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii('\n'));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii('~'));
}

void	ft_isascii_non_ascii_tests(void) {
	TEST_ASSERT_EQUAL_INT(0, ft_isascii(-15444));
	TEST_ASSERT_EQUAL_INT(0, ft_isascii(-1925724));
	TEST_ASSERT_EQUAL_INT(0, ft_isascii(-2));
	TEST_ASSERT_EQUAL_INT(0, ft_isascii(-1867380));
}

void	ft_isascii_tests(void) {
	UNITY_BEGIN();
	RUN_TEST(ft_isascii_ascii_tests);
	RUN_TEST(ft_isascii_non_ascii_tests);
	UNITY_END();
}