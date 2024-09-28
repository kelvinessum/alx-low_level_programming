#include <string.h>
#include <stdio.h>
#include "main.h"

int _putchar(char c) {
	return 0;  // Placeholder
}

int _islower(int c) {
	return 0;  // Placeholder
}

int _isalpha(int c) {
	return 0;  // Placeholder
}

int _abs(int n) {
	return n >= 0 ? n : -n;
}

int _isupper(int c) {
	return 0;  // Placeholder
}

int _isdigit(int c) {
	return 0;  // Placeholder
}

int _strlen(char *s) {
	int len = 0;
	while (s[len])
		len++;
	return len;
}

void _puts(char *s) {
	// Placeholder
}

char *_strcpy(char *dest, char *src) {
	char *start = dest;
	while ((*dest++ = *src++));
	return start;
}

int _atoi(char *s) {
	return 0;  // Placeholder
}

char *_strcat(char *dest, char *src) {
	char *start = dest;
	while (*dest)
		dest++;
	while ((*dest++ = *src++));
	return start;
}

char *_strncat(char *dest, char *src, int n) {
	char *start = dest;
	while (*dest)
		dest++;
	while (n-- && (*dest++ = *src++));
	return start;
}

char *_strncpy(char *dest, char *src, int n) {
	char *start = dest;
	while (n-- && (*dest++ = *src++));
	return start;
}

int _strcmp(char *s1, char *s2) {
	while (*s1 && (*s1 == *s2)) {
		s1++;
		s2++;
	}
	return *(unsigned char *)s1 - *(unsigned char *)s2;
}

char *_memset(char *s, char b, unsigned int n) {
	char *start = s;
	while (n--)
		*s++ = b;
	return start;
}

char *_memcpy(char *dest, char *src, unsigned int n) {
	char *start = dest;
	while (n--)
		*dest++ = *src++;
	return start;
}

char *_strchr(char *s, char c) {
	while (*s) {
		if (*s == c)
			return s;
		s++;
	}
	return NULL;
}

unsigned int _strspn(char *s, char *accept) {
	unsigned int count = 0;
	while (*s && strchr(accept, *s++))
		count++;
	return count;
}

char *_strpbrk(char *s, char *accept) {
	while (*s) {
		if (strchr(accept, *s))
			return s;
		s++;
	}
	return NULL;
}

char *_strstr(char *haystack, char *needle) {
	while (*haystack) {
		char *h = haystack, *n = needle;
		while (*n && *h == *n) {
			h++;
			n++;
		}
		if (!*n)
			return haystack;
		haystack++;
	}
	return NULL;
}
