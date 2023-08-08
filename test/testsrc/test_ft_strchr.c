/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:14:30 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/08 10:32:26 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_strchr_found_test(void) {
	TEST_ASSERT_EQUAL_CHAR('a', *(ft_strchr("a", 'a')));
	TEST_ASSERT_EQUAL_CHAR('e', *(ft_strchr("abcde", 'e')));
	TEST_ASSERT_EQUAL_CHAR('c', *(ft_strchr("x-bacon", 'c')));
	TEST_ASSERT_EQUAL_CHAR('z', *(ft_strchr("abcdefghijklmnopqrstuvwxyz", 'z')));
	TEST_ASSERT_EQUAL_CHAR('b', *(ft_strchr("          b", 'b')));
}

void	ft_strchr_not_found_test(void) {
	TEST_ASSERT_NULL(ft_strchr("a", 'z'));
	TEST_ASSERT_NULL(ft_strchr("0123456789", 'G'));
	TEST_ASSERT_NULL(ft_strchr("            ", ':'));
}

void	ft_strchr_empty_input_test(void) {
	TEST_ASSERT_NULL(ft_strchr("\0", 'A'));
}

void	ft_strchr_null_input_test(void) {
	TEST_ASSERT_NULL(ft_strchr(NULL, 'a'));
}

void	ft_strchr_tests(void) {
	UNITY_BEGIN();
	RUN_TEST(ft_strchr_found_test);
	RUN_TEST(ft_strchr_not_found_test);
	RUN_TEST(ft_strchr_empty_input_test);
	RUN_TEST(ft_strchr_null_input_test);
	UNITY_END();
}
