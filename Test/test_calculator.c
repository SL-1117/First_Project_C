#include <stdio.h>
#include <assert.h>

// Tell the compiler these functions exist
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

void test_add(void)
{
    assert(add(2, 3) == 5);
    assert(add(10, 20) == 30);
    assert(add(-5, 5) == 0);

    printf("✓ test_add passed\n");
}

void test_subtract(void)
{
    assert(subtract(5, 3) == 2);
    assert(subtract(10, 20) == -10);
    assert(subtract(-5, -5) == 0);

    printf("✓ test_subtract passed\n");
}

void test_multiply(void)
{
    assert(multiply(2, 3) == 6);
    assert(multiply(10, 5) == 50);
    assert(multiply(-2, 3) == -6);

    printf("✓ test_multiply passed\n");
}

void test_divide(void)
{
    assert(divide(10, 2) == 5);
    assert(divide(20, 4) == 5);
    assert(divide(-10, 2) == -5);

    printf("✓ test_divide passed\n");
}

int main(void)
{
    printf("Running tests...\n\n");

    test_add();
    test_subtract();
    test_multiply();
    test_divide();

    printf("\nAll tests passed!\n");

    return 0;
}