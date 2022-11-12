#include <stdio.h>
#include <stdlib.h>
int contains_non_numeric(char *str);
int _atoi(char *s);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void move_int_end_to_beg(char *str, int size, char fill);
char *multiply_strings(char *s1, char *s2, char *buff, unsigned int size_b);
void *set_mem(void *p, unsigned int nmemb, unsigned int size, char ch);
void *_calloc(unsigned int nmemb, unsigned int size);
int _strlen(char *s);
/**
* main - entry point for program
*
* @argc: count of arguments
* @argv: list of pointers to arguments
*
* Return: 0 on success, 1 on failure
*/
int main(int argc, char *argv[])
{
	unsigned int mem;
	int i;

	char *ret;

	if (argc != 3)
	{
										printf("Error\n");
												return (98);
													}
						for (i = 1; i < argc; i++)
								{
											if (contains_non_numeric(argv[i]))
														{
																		printf("Error\n");
																					return (98);
																							}
												}
							mem = _strlen(argv[1]) + _strlen(argv[2]) + 1;
								ret = _calloc(mem, sizeof(char));
									if (ret == NULL)
												return (98);
										ret = multiply_strings(argv[1], argv[2], ret, mem);
											printf("%s\n", ret);
												return (0);
}
