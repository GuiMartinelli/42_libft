/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:06:05 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/02 16:16:00 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_isalpha_alphabet_tests(void) {
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha('a'));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha('z'));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha('A'));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha('Z'));
}

void	ft_isalpha_non_alphabet_tests(void) {
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(0));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(' '));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha('\n'));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha('8'));
}

void	ft_isalpha_tests(void) {
	UNITY_BEGIN();
	RUN_TEST(ft_isalpha_alphabet_tests);
	RUN_TEST(ft_isalpha_non_alphabet_tests);
	UNITY_END();
}