VARIADIC FUNCTIONS:

Task 0: Write a function that returns the sum of all its parameters.

    Prototype: int sum_them_all(const unsigned int n, ...);
    If n == 0, return 0

Task 1: Write a function that prints numbers, followed by a new line.

    Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
    where separator is the string to be printed between numbers
    If separator is NULL, don’t print it
    Print a new line at the end of your function

Task 2: Write a function that prints strings, followed by a new line.

    Prototype: void print_strings(const char *separator, const unsigned int n, ...);
    
Task 3: Write a function that prints anything.

    Prototype: void print_all(const char * const format, ...);
    where format is a list of types of arguments passed to the function
        c: char
        i: integer
        f: float
        s: char * (if the string is NULL, print (nil) instead)
        any other char should be ignored
    Print a new line at the end of your function

