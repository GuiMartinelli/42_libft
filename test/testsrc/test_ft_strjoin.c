/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:52:05 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/08 11:19:28 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <string.h>
#include <stdio.h>

void	ft_strjoin_test_routine(char *expected, char *s1, char *s2) {
	char	*actual;

	actual = ft_strjoin(s1, s2);
	TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, actual, strlen(expected));
	free(actual);
}

void	ft_strjoin_valid_join_test(void) {
	ft_strjoin_test_routine("AB", "A", "B");
	ft_strjoin_test_routine("ABCD1234", "ABCD", "1234");
	ft_strjoin_test_routine("You Win!", "You ", "Win!");
	ft_strjoin_test_routine("Lorem ipsum dolor sit amet", "Lorem ipsum do", "lor sit amet");
	ft_strjoin_test_routine("This is a reeeeeeeeaaaaaaaaaaaaaaally BIG striiiiing!!!", "This is a reeeeeeeeaaaaaaaa", "aaaaaaally BIG striiiiing!!!");
}

void	ft_strjoin_empty_test(void) {
	ft_strjoin_test_routine("ABC", "ABC", "\0");
	ft_strjoin_test_routine("123", "\0", "123");
}

void	ft_strjoin_tests(void) {
	UNITY_BEGIN();
	RUN_TEST(ft_strjoin_valid_join_test);
	RUN_TEST(ft_strjoin_empty_test);
	UNITY_END();
}