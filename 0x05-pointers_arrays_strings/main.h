#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/* Function to calculate the length of a string */
int _strlen(char *s);

/* Function to print a string followed by a new line */
void _puts(char *str);

/* Function to update the value pointed to by a pointer to 98 */
void reset_to_98(int *n);

/* Function to swap the values of two integers */
void swap_int(int *a, int *b);

void print_rev(char *s);

void rev_string(char *s);

void puts2(char *str);

void puts_half(char *str);

void print_array(int *a, int n);

char *_strcpy(char *dest, char *src);
int _atoi(char *s);

#endif /* MAIN_H */
