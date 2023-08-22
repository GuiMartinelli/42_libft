/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:53:30 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/21 21:00:43 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_strdup_test_routine(char *string) {
	char	*dest_string;

	dest_string = ft_strdup(string);
	TEST_ASSERT_EQUAL_CHAR_ARRAY(string, dest_string, strlen(string));
	free(dest_string);
}

void	ft_strdup_duplicate_test(void) {
	ft_strdup_test_routine("Hello");
	ft_strdup_test_routine("Larger string");
	ft_strdup_test_routine("One a lot larger string than the one before");
}

void	ft_strdup_empty_test(void) {
	TEST_ASSERT_EMPTY(ft_strdup(""));
}

void	ft_strdup_null_test(void) {
	TEST_ASSERT_NULL(ft_strdup(NULL));
}

void	ft_strdup_tests(void) {
	UNITY_BEGIN();
	RUN_TEST(ft_strdup_duplicate_test);
	RUN_TEST(ft_strdup_empty_test);
	RUN_TEST(ft_strdup_null_test);
	UNITY_END();
}