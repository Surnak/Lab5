#include <ctest.h>
#include <roots.h>

CTEST(equation_suite, two_roots_test)
{
    // Given
    const double a = 1;
    const double b = 3;
    const double c = 2;

    // When
    double x1;
    double x2;
    int count;
    roots(a, b, c, &x1, &x2, &count);

    // Then
    
    const double expected_count = 2;
    const double expected_x1 = -2;
    const double expected_x2 = -1;

    ASSERT_DBL_NEAR(expected_count, count);
    ASSERT_DBL_NEAR(expected_x1, x1);
    ASSERT_DBL_NEAR(expected_x2, x2);
}

CTEST(equation_suite, one_root_test)
{
    // Given
    const double a = 2;
    const double b = -4;
    const double c = 2;

    // When
    double x1;
    double x2;
    int count;
    roots(a, b, c, &x1, &x2, &count);

    // Then
    const double expected_count = 1;
    const double expected_x1 = 1;
    const double expected_x2 = 1;

    ASSERT_DBL_NEAR(expected_count, count);
    ASSERT_DBL_NEAR(expected_x1, x1);
    ASSERT_DBL_NEAR(expected_x2, x2);
}