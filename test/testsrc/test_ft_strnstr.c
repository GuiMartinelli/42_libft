/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:30:30 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/29 20:52:49 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"



void	ft_strnstr_found_substring_test(void) {
	TEST_ASSERT_EQUAL_CHAR_ARRAY("World", ft_strnstr("Hello World", "World", 12), 6);
	TEST_ASSERT_EQUAL_CHAR_ARRAY("Blue Suede Shoes", ft_strnstr("Blue Suede Shoes", "Blue", 17), 17);
	TEST_ASSERT_EQUAL_CHAR_ARRAY("apple", ft_strnstr("Pineapple", "apple", 10), 5);
	TEST_ASSERT_EQUAL_CHAR_ARRAY("Night", ft_strnstr("I Wanna Rock n Roll All Night", "Night", 30), 5);
	TEST_ASSERT_EQUAL_CHAR_ARRAY("Z", ft_strnstr("ABCDEFGHIJKLMNOPQRSTUVWXYZ", "Z", 27), 1);
}

void	ft_strnstr_not_found_substring_test(void) {
	TEST_ASSERT_NULL(ft_strnstr("Palmeiras", "Mundial", 10));
	TEST_ASSERT_NULL(ft_strnstr("This is a string", "striing", 17));
	TEST_ASSERT_NULL(ft_strnstr("Should not find", "finD", 10));
	TEST_ASSERT_NULL(ft_strnstr("Hi", "Hi", 0));
}

void	ft_strnstr_empty_test(void) {
	TEST_ASSERT_NULL(ft_strnstr("", "Not empty", 5));
	TEST_ASSERT_EQUAL_CHAR_ARRAY("Something", ft_strnstr("Something", "", 10), 10);
}

void	ft_strnstr_null_test(void) {
	TEST_ASSERT_NULL(ft_strnstr(NULL, "Not null", 5));
	TEST_ASSERT_NULL(ft_strnstr("Not null", NULL, 5));
	TEST_ASSERT_NULL(ft_strnstr(NULL, NULL, 5));
}

void	ft_strnstr_tests(void) {
	UNITY_BEGIN();
	RUN_TEST(ft_strnstr_found_substring_test);
	RUN_TEST(ft_strnstr_not_found_substring_test);
	RUN_TEST(ft_strnstr_empty_test);
	RUN_TEST(ft_strnstr_null_test);
	UNITY_END();
}