/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:40:26 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/02 16:45:48 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_isdigit_digit_tests() {
	TEST_ASSERT_EQUAL_INT(1, ft_isdigit('0'));
	TEST_ASSERT_EQUAL_INT(1, ft_isdigit('5'));
	TEST_ASSERT_EQUAL_INT(1, ft_isdigit('9'));
}

void	ft_isdigit_non_digit_tests() {
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(0));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit('a'));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit('%'));
}

void	ft_isdigit_tests(void) {
	UNITY_BEGIN();
	RUN_TEST(ft_isdigit_digit_tests);
	RUN_TEST(ft_isdigit_non_digit_tests);
	UNITY_END();
}