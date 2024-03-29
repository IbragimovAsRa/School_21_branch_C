#ifndef SRC_TEST_CASES_S21_MATH_H_
#define SRC_TEST_CASES_S21_MATH_H_

#define _POSIX_C_SOURCE 200809L

#include <check.h>
#include <math.h>
#include <stdio.h>

#include "s21_math.h"

#define accuracy 1e-6
#define max_inf 1.0 / 0.0
#define min_inf -1.0 / 0.0
#define max_nan 0.0 / 0.0
#define min_nan -0.0 / 0.0

Suite *get_suite_s21_asin();

Suite *get_suite_s21_acos();

Suite *get_suite_s21_ceil();

Suite *get_suite_s21_exp();

Suite *get_suite_s21_log();

Suite *get_suite_s21_pow();

Suite *get_suite_s21_sqrt();

Suite *get_suite_s21_atan();

Suite *get_suite_s21_cos();

Suite *get_suite_s21_sin();

Suite *get_suite_s21_tan();

Suite *get_suite_s21_abs();

Suite *get_suite_s21_fabs();

Suite *get_suite_s21_floor();

Suite *get_suite_s21_fmod();

#endif  // SRC_TEST_CASES_S21_MATH_H_
