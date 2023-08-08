/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:20:27 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/08 11:25:44 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_strlen_valid_test(void) {
	TEST_ASSERT_EQUAL_INT(1, ft_strlen("A"));
	TEST_ASSERT_EQUAL_INT(5, ft_strlen("12345"));
	TEST_ASSERT_EQUAL_INT(12, ft_strlen("Hello World!"));
	TEST_ASSERT_EQUAL_INT(26, ft_strlen("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
}

void	ft_strlen_empty_test(void) {
	TEST_ASSERT_EQUAL_INT(0, ft_strlen("\0"));
	TEST_ASSERT_EQUAL_INT(0, ft_strlen("\0\0\0\0\0\0\0"));
}

void	ft_strlen_null_test(void) {
	TEST_ASSERT_EQUAL_INT(0, ft_strlen(NULL));
}

void	ft_strlen_tests(void) {
	UNITY_BEGIN();
	RUN_TEST(ft_strlen_valid_test);
	RUN_TEST(ft_strlen_empty_test);
	RUN_TEST(ft_strlen_null_test);
	UNITY_END();
}