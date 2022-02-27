#include"test.h"

test_t *currentTest = NULL;
int testInfo[3] = { 0 };

char *getSignOfStatus(int status) {
	switch (status) {
		case FAILED: return FAILED_SIGN; break;
		case PASSED: return PASSED_SIGN; break;
		default: return PENDING_SIGN; break;
	}
}

void tearDownTest() {
	if (flags & FLAG_TEST) {
		printf("%s%s %s \n", _P,
			   getSignOfStatus(currentTest->status),
			   currentTest->description);

		if (currentTest->status == FAILED)
			printf("%s", currentTest->errorMessage);

		testInfo[currentTest->status]++;
		strcpy(currentTest->errorMessage, "");
		popFlag(FLAG_TEST);
	}
}
