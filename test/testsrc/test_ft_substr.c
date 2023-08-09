/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:53:13 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/09 20:22:51 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_substr_test_routine(char *expected, char *test_string, unsigned int start, size_t len) {
	char	*actual;

	actual = ft_substr(test_string, start, len);
	TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, actual, strlen(expected));
	free(actual);
}

void	ft_substr_empty_test_routine(char *test_string, unsigned int start, size_t len) {
	char*	actual;

	actual = ft_substr(test_string, start, len);
	TEST_ASSERT_EMPTY(actual);
	free(actual);
}

void	ft_substr_substring_test(void) {
	ft_substr_test_routine("Hello", "Hello World", 0, 5);
	ft_substr_test_routine("World!", "Hello World!", 6, 6);
	ft_substr_test_routine("is working", "Is this working already?", 5, 10);
	ft_substr_test_routine("this", "not this", 4, 15);
}

void	ft_substring_empty_test(void) {
	ft_substr_empty_test_routine("Test string", 5, 0);
}

void	ft_substring_null_attribute_test(void) {
	ft_substr_empty_test_routine(NULL, 2, 5);
}

void	ft_substring_start_too_big_test(void) {
	ft_substr_empty_test_routine("Small string", 20, 5);
}

void	ft_substr_tests(void) {
	UNITY_BEGIN();
	RUN_TEST(ft_substr_substring_test);
	RUN_TEST(ft_substring_empty_test);
	RUN_TEST(ft_substring_null_attribute_test);
	RUN_TEST(ft_substring_start_too_big_test);
	UNITY_END();
}