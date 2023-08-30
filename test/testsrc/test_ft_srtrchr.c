/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_srtrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:56:47 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/29 21:02:38 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_strrchr_found_test(void) {
	TEST_ASSERT_EQUAL_CHAR('a', *(ft_strrchr("a", 'a')));
	TEST_ASSERT_EQUAL_CHAR('e', *(ft_strrchr("abcde", 'e')));
	TEST_ASSERT_EQUAL_CHAR('c', *(ft_strrchr("x-bacon", 'c')));
	TEST_ASSERT_EQUAL_CHAR('z', *(ft_strrchr("abcdefghijklmnopqrstuvwxyz", 'z')));
	TEST_ASSERT_EQUAL_CHAR('b', *(ft_strrchr("          b", 'b')));
}

void	ft_strrchr_not_found_test(void) {
	TEST_ASSERT_NULL(ft_strrchr("a", 'z'));
	TEST_ASSERT_NULL(ft_strrchr("0123456789", 'G'));
	TEST_ASSERT_NULL(ft_strrchr("            ", ':'));
}

void	ft_strrchr_empty_input_test(void) {
	TEST_ASSERT_NULL(ft_strrchr("\0", 'A'));
}

void	ft_strrchr_null_input_test(void) {
	TEST_ASSERT_NULL(ft_strrchr(NULL, 'a'));
}

void	ft_strrchr_tests(void) {
	UNITY_BEGIN();
	RUN_TEST(ft_strrchr_found_test);
	RUN_TEST(ft_strrchr_not_found_test);
	RUN_TEST(ft_strrchr_empty_input_test);
	RUN_TEST(ft_strrchr_null_input_test);
	UNITY_END();
}