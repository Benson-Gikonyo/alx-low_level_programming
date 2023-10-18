#ifndef HEADER_FILE
#define HEADER_FILE

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct arg_types - argument types and their corresponding print function
 * Description - has the format- ie char, float, etc and associated functions
 * @format: character
 * @function: corresponding print function
 */
typedef struct arg_types
{
	char *format;
	void (*function)();
} arg_t;


#endif
