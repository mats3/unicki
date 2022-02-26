#ifndef SUITE_H
#define SUITE_H

#include<stdio.h>

#include"test.h"

#define suite(x) \
	tearDownTest(); \
	printf("%s%s:\n", _P, (x)); \
	paddingStage++;

#define _end \
	tearDownTest(); \
	paddingStage--

void printTestInfo(void);

#endif
