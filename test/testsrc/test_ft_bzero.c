/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:58:08 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/04 13:53:43 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdlib.h>
#include <strings.h>

char*	actual_array;
char*	expected_array;

void	init_arrays() {
	actual_array = malloc(1024);
	expected_array = malloc(1024);
}

void	free_arrays() {
	free(actual_array);
	free(expected_array);
}

void	run_bzero_and_ft_bzero(int size) {
	ft_bzero(actual_array, size);
	bzero(expected_array, size);
}

void	ft_bzero_test(void) {
	init_arrays();
	run_bzero_and_ft_bzero(5);
	TEST_ASSERT_EQUAL_CHAR_ARRAY(expected_array, actual_array, 5);
	run_bzero_and_ft_bzero(400);
	TEST_ASSERT_EQUAL_CHAR_ARRAY(expected_array, actual_array, 400);
	run_bzero_and_ft_bzero(1000);
	TEST_ASSERT_EQUAL_CHAR_ARRAY(expected_array, actual_array, 1000);
	free_arrays();
}

void	ft_bzero_null_pointer_test(void) {
	ft_bzero(NULL, 3);
}

void	ft_bzero_tests() {
	UNITY_BEGIN();
	RUN_TEST(ft_bzero_test);
	RUN_TEST(ft_bzero_null_pointer_test);
	UNITY_END();
}