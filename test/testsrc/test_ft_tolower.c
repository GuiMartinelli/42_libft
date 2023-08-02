/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:24:23 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/02 15:37:34 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_tolower_test_uppercase_char(void) {
	TEST_ASSERT_EQUAL_CHAR('a', ft_tolower('A'));
	TEST_ASSERT_EQUAL_CHAR('m', ft_tolower('M'));
	TEST_ASSERT_EQUAL_CHAR('z', ft_tolower('Z'));
}

void	ft_tolower_test_lowercase_char(void) {
	TEST_ASSERT_EQUAL_CHAR('b', ft_tolower('b'));
	TEST_ASSERT_EQUAL_CHAR('n', ft_tolower('n'));
	TEST_ASSERT_EQUAL_CHAR('y', ft_tolower('y'));
}

void	ft_tolower_test_non_alphabet_char(void) {
	TEST_ASSERT_EQUAL_CHAR('1', ft_tolower('1'));
	TEST_ASSERT_EQUAL_CHAR(' ', ft_tolower(' '));
	TEST_ASSERT_EQUAL_CHAR(0, ft_tolower(0));
}

void	ft_tolower_tests(void) {
	UNITY_BEGIN();
	RUN_TEST(ft_tolower_test_uppercase_char);
	RUN_TEST(ft_tolower_test_lowercase_char);
	RUN_TEST(ft_tolower_test_non_alphabet_char);
	UNITY_END();
}
