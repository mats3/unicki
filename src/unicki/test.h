#ifndef TEST_H
#define TEST_H

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

#include"ui.h"
#include"flag.h"

#define test(inputDesc) \
	tearDownTest(); \
	currentTest = malloc(sizeof(test_t)); \
	strcpy(currentTest->description, (inputDesc)); \
	currentTest->status = PENDING; \
	setFlag(FLAG_TEST);

enum { FAILED, PASSED, PENDING };

typedef struct test_t {
	char description[150];
	char errorMessage[800];
	int status;
} test_t;

extern test_t *currentTest;
extern int testInfo[3];

char *getSignOfStatus(int status);

void tearDownTest();

#endif
