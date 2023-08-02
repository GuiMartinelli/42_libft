/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:31:34 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/02 16:05:01 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_toupper_test_lowercase_char(void) {
	TEST_ASSERT_EQUAL_CHAR('A', ft_toupper('a'));
	TEST_ASSERT_EQUAL_CHAR('M', ft_toupper('m'));
	TEST_ASSERT_EQUAL_CHAR('Z', ft_toupper('z'));
}

void	ft_toupper_test_uppercase_char(void) {
	TEST_ASSERT_EQUAL_CHAR('B', ft_toupper('B'));
	TEST_ASSERT_EQUAL_CHAR('N', ft_toupper('N'));
	TEST_ASSERT_EQUAL_CHAR('Y', ft_toupper('Y'));
}

void	ft_toupper_test_non_alphabet_char(void) {
	TEST_ASSERT_EQUAL_CHAR('1', ft_toupper('1'));
	TEST_ASSERT_EQUAL_CHAR(' ', ft_toupper(' '));
	TEST_ASSERT_EQUAL_CHAR(0, ft_toupper(0));
}

void	ft_toupper_tests(void) {
	UNITY_BEGIN();
	RUN_TEST(ft_toupper_test_lowercase_char);
	RUN_TEST(ft_toupper_test_uppercase_char);
	RUN_TEST(ft_toupper_test_non_alphabet_char);
	UNITY_END();
}