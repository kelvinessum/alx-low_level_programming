#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

int _putchar(char c) {
	return putchar(c); // Outputs a single character to stdout
}

int _islower(int c) {
	return (c >= 'a' && c <= 'z');  // Returns 1 if the character is lowercase
}

int _isalpha(int c) {
	return isalpha(c);  // Returns non-zero if the character is alphabetic
}

int _abs(int n) {
	return (n < 0) ? -n : n;  // Returns the absolute value of an integer
}

int _isupper(int c) {
	return (c >= 'A' && c <= 'Z');  // Returns 1 if the character is uppercase
}

int _isdigit(int c) {
	return (c >= '0' && c <= '9');  // Returns 1 if the character is a digit
}

int _strlen(char *s) {
	int len = 0;
	while (s[len] != '\0') len++;
	return len;  // Returns the length of a string
}

void _puts(char *s) {
	while (*s) _putchar(*s++);  // Prints a string followed by a newline
	_putchar('\n');
}

char *_strcpy(char *dest, char *src) {
	char *ptr = dest;
	while (*src) *dest++ = *src++;
	*dest = '\0';
	return ptr;  // Copies a string from src to dest
}

int _atoi(char *s) {
	int result = 0, sign = 1;
	if (*s == '-') {
		sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9') {
		result = result * 10 + (*s - '0');
		s++;
	}
	return result * sign;  // Converts a string to an integer
}

char *_strcat(char *dest, char *src) {
	char *ptr = dest + _strlen(dest);
	while (*src) *ptr++ = *src++;
	*ptr = '\0';
	return dest;  // Concatenates two strings
}

char *_strncat(char *dest, char *src, int n) {
	char *ptr = dest + _strlen(dest);
	while (n-- && *src) *ptr++ = *src++;
	*ptr = '\0';
	return dest;  // Concatenates two strings, but at most n characters
}

char *_strncpy(char *dest, char *src, int n) {
	char *ptr = dest;
	while (n-- && (*dest++ = *src++));
	while (n-- > 0) *dest++ = '\0';
	return ptr;  // Copies at most n characters from src to dest
}

int _strcmp(char *s1, char *s2) {
	while (*s1 && (*s1 == *s2)) {
		s1++;
		s2++;
	}
	return *(unsigned char*)s1 - *(unsigned char*)s2;  // Compares two strings
}

char *_memset(char *s, char b, unsigned int n) {
	for (unsigned int i = 0; i < n; i++) {
		s[i] = b;
	}
	return s;  // Fills the first n bytes of the memory area pointed to by s with the constant byte b
}

char *_memcpy(char *dest, char *src, unsigned int n) {
	char *ptr = dest;
	while (n--) *dest++ = *src++;
	return ptr;  // Copies n bytes from src to dest
}

char *_strchr(char *s, char c) {
	while (*s) {
		if (*s == c) return s;
		s++;
	}
	return NULL;  // Returns a pointer to the first occurrence of c in s, or NULL if not found
}

unsigned int _strspn(char *s, char *accept) {
	unsigned int count = 0;
	while (*s && strchr(accept, *s++)) count++;
	return count;  // Calculates the length of the initial segment of s which consists only of bytes from accept
}

char *_strpbrk(char *s, char *accept) {
	while (*s) {
		if (strchr(accept, *s)) return s;
		s++;
	}
	return NULL;  // Searches for any of a set of bytes in a string
}

char *_strstr(char *haystack, char *needle) {
	if (!*needle) return haystack;
	for (; *haystack; haystack++) {
		if (*haystack == *needle) {
			char *h = haystack, *n = needle;
			while (*h && *n && *h == *n) {
				h++;
				n++;
			}
			if (!*n) return haystack;
		}
	}
	return NULL;  // Finds the first occurrence of the substring needle in the string haystack
}
