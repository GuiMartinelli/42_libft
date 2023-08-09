/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:16:34 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/09 19:46:49 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <string.h>

void	ft_strtrim_test_routine(char * expected, char *test_string, char *charset) {
	char*	actual;

	actual = ft_strtrim(test_string, charset);
	TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, actual, strlen(expected));
	free(actual);
}

void	ft_strtrim_empty_test_routine(char *test_string, char *charset) {
	char*	actual;

	actual = ft_strtrim(test_string, charset);
	TEST_ASSERT_EMPTY(actual);
	free(actual);
}

void	ft_strtrim_single_charset_test(void) {
	ft_strtrim_test_routine("Hello", "    Hello World    ", " ");
	ft_strtrim_test_routine("Hello World", "   Hello World   ", " ");
	ft_strtrim_test_routine("Testing", "....Testing.....", ".");
	ft_strtrim_test_routine("Cool", "_______________Cool_______________", "_");
	ft_strtrim_test_routine("0____________________0", "___________________0____________________0__________________", "_");
	ft_strtrim_test_routine("On begin", "      On begin", " ");
	ft_strtrim_test_routine("On end", "On end            ", " ");
}

void	ft_strtrim_multiple_charset_test(void) {
	ft_strtrim_test_routine("It Works", " . It Works..   .", " .");
	ft_strtrim_test_routine("This is a tricky one", "1234567890 This is a tricky one 0987654321", "0123456789 ");
	ft_strtrim_test_routine("Cheers if thiiiiiiiiiiis works", "iiiiii    Cheers if thiiiiiiiiiiis worksiiiiii i i i i iii", " i");
	ft_strtrim_test_routine("|0123456789|", "|0123456789|", "0123456789");
}

void	ft_strtrim_empty_return_test(void) {
	ft_strtrim_empty_test_routine("      ", " ");
	ft_strtrim_empty_test_routine("12345", "12345");
	ft_strtrim_empty_test_routine("HELLO", "EOLH");
}

void	ft_strtrim_null_attribute_test(void) {
	TEST_ASSERT_NULL(ft_strtrim(NULL, " "));
	TEST_ASSERT_NULL(ft_strtrim("null", NULL));
	TEST_ASSERT_NULL(ft_strtrim(NULL, NULL));
}

void	ft_strtrim_tests(void) {
	UNITY_BEGIN();
	RUN_TEST(ft_strtrim_single_charset_test);
	RUN_TEST(ft_strtrim_multiple_charset_test);
	RUN_TEST(ft_strtrim_empty_return_test);
	RUN_TEST(ft_strtrim_null_attribute_test);
	UNITY_END();
}