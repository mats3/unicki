#ifndef UNICKI_H
#define UNICKI_H

#include<stdbool.h>
#include<string.h>

#include"suite.h"

#define _testSection_ \
	int main(int argc, char **argv) { \
	printContent(TITLE);

#define _endSection_ \
	printTestInfo(); \
	return 0; \
	}

#define errorDummy(type, ...) \
	{ type errorDummy = __VA_ARGS__; \
	

#define catchErrorPtr(errorPtr, ptr) \
	if (ptr == NULL) { \
		(errorPtr) = &errorDummy; \
	}

#define _endDummy }

void assertCharEq(char expected, char received);

void assertIntEq(int expected, int received);

void assertStrEq(char *expected, char *received);

void assertPtrIsNull(void *ptr);

#endif
