/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:12:01 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/29 20:27:48 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_strncmp_equal_test(void) {
	TEST_ASSERT_EQUAL_INT(0, ft_strncmp("A", "A", 1));
	TEST_ASSERT_EQUAL_INT(0, ft_strncmp("Hello World", "Hello World", 12));
	TEST_ASSERT_EQUAL_INT(0, ft_strncmp("1 2 3 00", "1 2 3 55", 5));
	TEST_ASSERT_EQUAL_INT(0, ft_strncmp("Hello", "Bye Bye", 0));
	TEST_ASSERT_EQUAL_INT(0, ft_strncmp(
		"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.",
		"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.",
		232));
}

void	ft_strncmp_not_equal_test(void) {
	TEST_ASSERT_EQUAL_INT(32, ft_strncmp("a", "A", 1));
	TEST_ASSERT_EQUAL_INT(-32, ft_strncmp("A", "a", 1));
	TEST_ASSERT_EQUAL_INT(-2, ft_strncmp("Good bye", "Good dye", 9));
	TEST_ASSERT_EQUAL_INT(-74, ft_strncmp("1234567890", "123456789z", 11));
}

void	ft_strncmp_empty_test(void) {
	TEST_ASSERT_EQUAL_INT(-65, ft_strncmp("", "A", 1));
	TEST_ASSERT_EQUAL_INT(122, ft_strncmp("z", "", 1));
}

void	ft_strncmp_null_test(void) {
	TEST_ASSERT_EQUAL_INT(0, ft_strncmp(NULL, "A", 1));
	TEST_ASSERT_EQUAL_INT(0, ft_strncmp("Hi", NULL, 43));
	TEST_ASSERT_EQUAL_INT(0, ft_strncmp(NULL, NULL, 12));
}

void	ft_strncmp_tests(void) {
	UNITY_BEGIN();
	RUN_TEST(ft_strncmp_equal_test);
	RUN_TEST(ft_strncmp_not_equal_test);
	RUN_TEST(ft_strncmp_empty_test);
	RUN_TEST(ft_strncmp_null_test);
	UNITY_END();
}