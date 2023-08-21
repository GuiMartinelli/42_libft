/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:33:33 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/21 20:48:55 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_strlcat_test_routine(char *expected, char *dest, char *src, size_t str_size, size_t expected_return) {
	char	*dest_string = malloc(str_size);
	strcpy(dest_string, dest);

	TEST_ASSERT_EQUAL_INT(expected_return, ft_strlcat(dest_string, src, str_size));
	TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, dest_string, strlen(expected));
	free(dest_string);
}

void	ft_strlcat_concat_tests(void) {
	ft_strlcat_test_routine("AB", "A", "B", 3, 2);
	ft_strlcat_test_routine("Hello World!", "Hello ", "World!", 13, 12);
	ft_strlcat_test_routine("Thunderstruck", "Thunder", "struck", 99, 13);
	ft_strlcat_test_routine("Legend of", "Legend", " of Zelda", 10, 15);
	ft_strlcat_test_routine("empty?", "", "empty?", 7, 6);
	ft_strlcat_test_routine("empty?", "empty?", "", 7, 6);
}

void	ft_strlcat_null_tests(void) {
	TEST_ASSERT_EQUAL_INT(0, ft_strlcat("One", NULL, 11));
	TEST_ASSERT_EQUAL_INT(0, ft_strlcat(NULL, "Two", 11));
}

void	ft_strlcat_tests(void) {
	UNITY_BEGIN();
	RUN_TEST(ft_strlcat_concat_tests);
	RUN_TEST(ft_strlcat_null_tests);
	UNITY_END();
}
