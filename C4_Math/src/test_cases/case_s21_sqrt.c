#include "../s21_math_tests.h"

START_TEST(sqrt_test_1) { ck_assert_ldouble_nan(s21_sqrt(min_inf)); }
END_TEST

START_TEST(sqrt_test_2) { ck_assert_ldouble_infinite(s21_sqrt(max_inf)); }
END_TEST

START_TEST(sqrt_test_3) { ck_assert_ldouble_nan(s21_sqrt(max_nan)); }
END_TEST

START_TEST(sqrt_test_4) { ck_assert_ldouble_nan(s21_sqrt(min_nan)); }
END_TEST

START_TEST(sqrt_test_5) {
  ck_assert_ldouble_eq_tol(s21_sqrt(0.5), sqrt(0.5), accuracy);
}
END_TEST

START_TEST(sqrt_test_6) { ck_assert_ldouble_nan(s21_sqrt(-0.5)); }
END_TEST

START_TEST(sqrt_test_7) {
  ck_assert_ldouble_eq_tol(s21_sqrt(1), sqrt(1), accuracy);
}
END_TEST

START_TEST(sqrt_test_8) {
  ck_assert_ldouble_eq_tol(s21_sqrt(1.1), sqrt(1.1), accuracy);
}
END_TEST

START_TEST(sqrt_test_9) {
  ck_assert_ldouble_eq_tol(s21_sqrt(0), sqrt(0), accuracy);
}
END_TEST

START_TEST(sqrt_test_10) {
  ck_assert_ldouble_eq_tol(s21_sqrt(-0), sqrt(-0), accuracy);
}
END_TEST

START_TEST(sqrt_test_11) {
  ck_assert_ldouble_eq_tol(s21_sqrt(5.123456789123), sqrt(5.123456789123),
                           accuracy);
}
END_TEST

START_TEST(sqrt_test_12) {
  ck_assert_ldouble_eq_tol(s21_sqrt(0.00000004564897), sqrt(0.00000004564897),
                           accuracy);
}
END_TEST

START_TEST(sqrt_test_13) {
  ck_assert_int_eq(1, (isnan(sqrt(-1)) && isnan(s21_sqrt(-1))));
}
END_TEST

Suite *get_suite_s21_sqrt() {
  Suite *s = suite_create("s21_sqrt suite ");
  TCase *tc = tcase_create("s21_sqrt test case");
  suite_add_tcase(s, tc);
  tcase_add_test(tc, sqrt_test_1);
  tcase_add_test(tc, sqrt_test_2);
  tcase_add_test(tc, sqrt_test_3);
  tcase_add_test(tc, sqrt_test_4);
  tcase_add_test(tc, sqrt_test_5);
  tcase_add_test(tc, sqrt_test_6);
  tcase_add_test(tc, sqrt_test_7);
  tcase_add_test(tc, sqrt_test_8);
  tcase_add_test(tc, sqrt_test_9);
  tcase_add_test(tc, sqrt_test_10);
  tcase_add_test(tc, sqrt_test_11);
  tcase_add_test(tc, sqrt_test_12);
  tcase_add_test(tc, sqrt_test_13);
  return s;
}