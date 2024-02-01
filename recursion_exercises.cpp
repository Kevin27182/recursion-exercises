

/**
* ---------------------------------------------------------------------
* @copyright
* Copyright 2024 Kevin Nard
*
* @author: Kevin Nard
* @course: Data Structures (CSCI 2320)
*
* @file recursion_exercises.cpp
* @brief Implements some examples of recursive functions.
-----------------------------------------------------------------------
*/

#include <iostream>

int factorial(int n)
{
    if (0 <= n && n <= 1) // anchor case
    {
        return 1;
    }
    else // recursive case
    {
        return n * factorial(n - 1);
    }
}

int power(int base, int exponent)
{
    if (exponent == 1) // anchor case
    {
        return base;
    }
    else // recursive case
    {
        return base * power(base, exponent - 1);
    }
}

int sum_digits(unsigned n)
{
    if (0 <= n && n < 10) // anchor case
    {
        return n;
    }
    else // recursive case
    {
        return n % 10 + sum_digits(n / 10);
    }
}

int b_counter(char* data, int length, int i)
{
    if (i == length) // anchor case
    {
        if (toupper(data[i]) == 'B')
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else // recursive case
    {
        if (toupper(data[i]) == 'B')
        {
            return 1 + b_counter(data, length, ++i);
        }
        else
        {
            return 0 + b_counter(data, length, ++i);
        }
    }
}

int string_length(char* data)
{
    if (data[0] == NULL) // anchor case
    {
        return 0;
    }
    else // recursive case
    {
        return 1 + string_length(data + 1);
    }
}

int main()
{
    int n1 = 5;
    std::cout << n1 << "! = " << factorial(n1) << std::endl;

    int base = 2;
    int exp = 3;
    std::cout << base << "^" << exp << " = " << power(2,3) << std::endl;

    int n2 = 123456;
    std::cout << "Sum of digits in " << n2 << " = " << sum_digits(n2) << std::endl;

    char my_string[] = {"bHellbo\0"};
    int len = string_length(my_string);
    std::cout << "Number of b's in string \"" << my_string << "\" = " << b_counter(my_string, len, 0) << std::endl;

    char my_string_2[] = {"Hello\0"};
    std::cout << "Length of string \"" << my_string_2 << "\" = " << string_length(my_string_2) << std::endl;

    std::cout << std::endl << std:: endl;
    return 0;
}