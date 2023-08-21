/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 20:50:58 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/21 20:32:08 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_strlcpy_test_routine(char *expected, char *src_string, size_t str_size, size_t expected_return) {
	char	*dest_string = malloc(str_size);

	TEST_ASSERT_EQUAL_INT(expected_return, ft_strlcpy(dest_string, src_string, str_size));
	TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, dest_string, strlen(expected));
	free(dest_string);
}

void	ft_strlcpy_empty_test_routine(char *src_string, size_t str_size, size_t expected_return) {
	char	*dest_string = malloc(20);

	TEST_ASSERT_EQUAL_INT(expected_return, ft_strlcpy(dest_string, src_string, str_size));
	TEST_ASSERT_EMPTY(dest_string);
	free(dest_string);
}

void	ft_strlcpy_copy_test(void) {
	ft_strlcpy_test_routine("A", "A", 2, 1);
	ft_strlcpy_test_routine("Hello", "Hello", 6, 5);
	ft_strlcpy_test_routine("Blue", "Blue Sky", 5, 8);
	ft_strlcpy_test_routine("Goodbye", "Goodbye Blue Sky", 8, 16);
}

void	ft_strlcpy_null_parameter_test(void) {
	char	*dest_string = malloc(11);

	TEST_ASSERT_EQUAL_INT(0, ft_strlcpy(dest_string, NULL, 11));
	TEST_ASSERT_EQUAL_INT(0, ft_strlcpy(NULL, "Wonderwall", 11));
	TEST_ASSERT_EQUAL_INT(0, ft_strlcpy(NULL, NULL, 11));

	free(dest_string);
}

void	ft_strlcpy_empty_parameter_test(void) {
	ft_strlcpy_empty_test_routine("Cats are beautiful", 0, 18);
	ft_strlcpy_empty_test_routine("", 12, 0);
}

void	ft_strlcpy_tests(void) {
	UNITY_BEGIN();
	RUN_TEST(ft_strlcpy_copy_test);
	RUN_TEST(ft_strlcpy_empty_parameter_test);
	RUN_TEST(ft_strlcpy_null_parameter_test);
	UNITY_END();
}