/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:17:58 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/02 16:44:57 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testsrc/test.h"

void setUp (void) {}
void tearDown (void) {}

int	main(void) {
	ft_toupper_tests();
	ft_tolower_tests();
	ft_isalpha_tests();
	ft_isdigit_tests();
	return (0);
}
