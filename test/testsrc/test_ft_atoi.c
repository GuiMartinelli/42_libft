/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:23:42 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/03 17:46:43 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <limits.h>

void	ft_atoi_positive_numbers_tests(void) {
	TEST_ASSERT_EQUAL_INT(0, ft_atoi("0"));
	TEST_ASSERT_EQUAL_INT(42, ft_atoi("42"));
	TEST_ASSERT_EQUAL_INT(666, ft_atoi("666"));
	TEST_ASSERT_EQUAL_INT(2112, ft_atoi("2112"));
	TEST_ASSERT_EQUAL_INT(54321, ft_atoi("54321"));
	TEST_ASSERT_EQUAL_INT(555555, ft_atoi("555555"));
	TEST_ASSERT_EQUAL_INT(1000000, ft_atoi("1000000"));
	TEST_ASSERT_EQUAL_INT(99999999, ft_atoi("99999999"));
	TEST_ASSERT_EQUAL_INT(111111111, ft_atoi("111111111"));
	TEST_ASSERT_EQUAL_INT(2000000000, ft_atoi("2000000000"));
	TEST_ASSERT_EQUAL_INT(2, ft_atoi("0000000002"));
}

void	ft_atoi_negative_numbers_tests(void) {
	TEST_ASSERT_EQUAL_INT(-1, ft_atoi("-1"));
	TEST_ASSERT_EQUAL_INT(-42, ft_atoi("-42"));
	TEST_ASSERT_EQUAL_INT(-666, ft_atoi("-666"));
	TEST_ASSERT_EQUAL_INT(-2112, ft_atoi("-2112"));
	TEST_ASSERT_EQUAL_INT(-54321, ft_atoi("-54321"));
	TEST_ASSERT_EQUAL_INT(-555555, ft_atoi("-555555"));
	TEST_ASSERT_EQUAL_INT(-1000000, ft_atoi("-1000000"));
	TEST_ASSERT_EQUAL_INT(-99999999, ft_atoi("-99999999"));
	TEST_ASSERT_EQUAL_INT(-111111111, ft_atoi("-111111111"));
	TEST_ASSERT_EQUAL_INT(-2000000000, ft_atoi("-2000000000"));
	TEST_ASSERT_EQUAL_INT(-2, ft_atoi("-0000000002"));
}

void	ft_atoi_limits_numbers_tests(void) {
	TEST_ASSERT_EQUAL_INT(INT_MAX, ft_atoi("2147483647"));
	TEST_ASSERT_EQUAL_INT(INT_MIN, ft_atoi("-2147483648"));
}

void	ft_atoi_invalid_input_tests(void) {
	TEST_ASSERT_EQUAL_INT(0, ft_atoi("A"));
	TEST_ASSERT_EQUAL_INT(0, ft_atoi("--100"));
	TEST_ASSERT_EQUAL_INT(0, ft_atoi(" "));
	TEST_ASSERT_EQUAL_INT(0, ft_atoi("\n"));
}

void	ft_atoi_off_limits_handling_tests(void) {
	TEST_ASSERT_EQUAL_INT(-2147483648, ft_atoi("2147483648"));
	TEST_ASSERT_EQUAL_INT(2147483647, ft_atoi("-2147483649"));
}

void	ft_atoi_alphabet_handling_tests(void) {
	TEST_ASSERT_EQUAL_INT(12, ft_atoi("12e"));
	TEST_ASSERT_EQUAL_INT(123, ft_atoi("123 56"));
	TEST_ASSERT_EQUAL_INT(1, ft_atoi("1F0000000"));
}

void	ft_atoi_tests(void) {
	UNITY_BEGIN();
	RUN_TEST(ft_atoi_positive_numbers_tests);
	RUN_TEST(ft_atoi_negative_numbers_tests);
	RUN_TEST(ft_atoi_limits_numbers_tests);
	RUN_TEST(ft_atoi_invalid_input_tests);
	RUN_TEST(ft_atoi_off_limits_handling_tests);
	RUN_TEST(ft_atoi_alphabet_handling_tests);
	UNITY_END();
}