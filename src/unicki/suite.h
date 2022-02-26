#ifndef SUITE_H
#define SUITE_H

#include<stdio.h>

#include"test.h"

#define suite(x) \
	tearDownTest(); \
	if (flags & FLAG_SUITEHASTEST) { printf("\n"); } \
	popFlag(FLAG_SUITEHASTEST); \
	printf("%s%s:\n", _P, (x)); \
	paddingStage++;

#define _end \
	tearDownTest(); \
	paddingStage--

void printTestInfo(void);

#endif
