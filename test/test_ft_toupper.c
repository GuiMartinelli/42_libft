#include "../unity/src/unity.h"
#include "../src/libft.h"

void setUp (void) {} /* Is run before every test, put unit init calls here. */
void tearDown (void) {} /* Is run after every test, put unit clean-up calls here. */

void test_lowercase_char(void) {
	TEST_ASSERT_EQUAL_CHAR('A', ft_toupper('a'));
	TEST_ASSERT_EQUAL_CHAR('M', ft_toupper('m'));
	TEST_ASSERT_EQUAL_CHAR('Z', ft_toupper('z'));
}

void test_uppercase_char(void) {
	TEST_ASSERT_EQUAL_CHAR('B', ft_toupper('B'));
	TEST_ASSERT_EQUAL_CHAR('N', ft_toupper('N'));
	TEST_ASSERT_EQUAL_CHAR('Y', ft_toupper('Y'));
}

void test_non_alphabet_char(void) {
	TEST_ASSERT_EQUAL_CHAR('1', ft_toupper('1'));
	TEST_ASSERT_EQUAL_CHAR(' ', ft_toupper(' '));
	TEST_ASSERT_EQUAL_CHAR(0, ft_toupper(0));
}

int	main(void) {
	UNITY_BEGIN();
	RUN_TEST(test_lowercase_char);
	RUN_TEST(test_uppercase_char);
	RUN_TEST(test_non_alphabet_char);
	return (UNITY_END());
}