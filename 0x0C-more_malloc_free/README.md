0x0C. C - More malloc, free

Task 0: Write a function that allocates memory using malloc.

    Prototype: void *malloc_checked(unsigned int b);
    Returns a pointer to the allocated memory
    if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98

Task 1: Write a function that concatenates two strings.

    Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
    The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
    If the function fails, it should return NULL
    If n is greater or equal to the length of s2 then use the entire string s2
    if NULL is passed, treat it as an empty string

Task 2: Write a function that allocates memory for an array, using malloc.

	Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
	The array created should contain all the values from min (included) to max (included), ordered from min to max
	Return: the pointer to the newly created array


Task 3: Write a function that creates an array of integers.

    Prototype: int *array_range(int min, int max);
    The array created should contain all the values from min (included) to max (included), ordered from min to max
    Return: the pointer to the newly created array

Task 4: Write a function that reallocates a memory block using malloc and free

    Prototype: void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
    where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
    old_size is the size, in bytes, of the allocated space for ptr
    and new_size is the new size, in bytes of the new memory block
    The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes

