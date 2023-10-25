0x08. C - Recursion

Task 0: Write a function that prints a string, followed by a new line.

    Prototype: void _puts_recursion(char *s);

FYI: The standard library provides a similar function: puts. Run man puts to learn more.

Task 1: Write a function that prints a string in reverse.

    Prototype: void _print_rev_recursion(char *s);

Task 2: Write a function that returns the length of a string.

    Prototype: int _strlen_recursion(char *s);

FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

Task 3: Write a function that returns the factorial of a given number.

    Prototype: int factorial(int n);
    If n is lower than 0, the function should return -1 to indicate an error
    Factorial of 0 is 1

Task 4: Write a function that returns the value of x raised to the power of y.

    Prototype: int _pow_recursion(int x, int y);
    If y is lower than 0, the function should return -1

FYI: The standard library provides a different function: pow. Run man pow to learn more.

Task 5: Write a function that returns 1 if a string is a palindrome and 0 if not.

    Prototype: int is_palindrome(char *s);
    An empty string is a palindrome
