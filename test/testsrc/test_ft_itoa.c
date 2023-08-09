/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 09:46:17 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/09 19:54:39 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_itoa_test_routine(char * expected, int test_value) {
	char*	actual;

	actual = ft_itoa(test_value);
	TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, actual, strlen(expected));
	free(actual);
}

void	ft_itoa_positive_numbers_tests(void) {
	ft_itoa_test_routine("0", 0);
	ft_itoa_test_routine("42", 42);
	ft_itoa_test_routine("666", 666);
	ft_itoa_test_routine("2112", 2112);
	ft_itoa_test_routine("54321", 54321);
	ft_itoa_test_routine("555555", 555555);
	ft_itoa_test_routine("1000000", 1000000);
	ft_itoa_test_routine("99999999", 99999999);
	ft_itoa_test_routine("111111111", 111111111);
	ft_itoa_test_routine("2000000000", 2000000000);
}

void	ft_itoa_negative_numbers_tests(void) {
	ft_itoa_test_routine("-1", -1);
	ft_itoa_test_routine("-42", -42);
	ft_itoa_test_routine("-666", -666);
	ft_itoa_test_routine("-2112", -2112);
	ft_itoa_test_routine("-54321", -54321);
	ft_itoa_test_routine("-555555", -555555);
	ft_itoa_test_routine("-1000000", -1000000);
	ft_itoa_test_routine("-99999999", -99999999);
	ft_itoa_test_routine("-111111111", -111111111);
	ft_itoa_test_routine("-2000000000", -2000000000);
}

void	ft_itoa_limits_numbers_tests(void) {
	ft_itoa_test_routine("2147483647", INT_MAX);
	ft_itoa_test_routine("-2147483648", INT_MIN);
}

void	ft_itoa_tests(void) {
	UNITY_BEGIN();
	RUN_TEST(ft_itoa_positive_numbers_tests);
	RUN_TEST(ft_itoa_negative_numbers_tests);
	RUN_TEST(ft_itoa_limits_numbers_tests);
	UNITY_END();
}