/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:25:35 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/03 15:29:31 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_isalnum_alphanumeric_tests(void) {
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum('a'));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum('Z'));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum('0'));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum('8'));
}

void	ft_isalnum_non_alphanumeric_tests(void) {
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(' '));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum('.'));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum('!'));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(0));
}

void	ft_isalnum_tests(void) {
	UNITY_BEGIN();
	RUN_TEST(ft_isalnum_alphanumeric_tests);
	RUN_TEST(ft_isalnum_non_alphanumeric_tests);
	UNITY_END();
}