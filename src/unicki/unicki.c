#include"unicki.h"

bool isTestPassedConditonTrue(bool condition) {
	if (condition) {
		if (currentTest->status == FAILED)
			return true;
		currentTest->status = PASSED;
		return true;
	}
	return false;
}

void isTestFailed(char *e, char *r) {
	currentTest->status = FAILED;

	char errorMessage[500];
	sprintf(errorMessage,
		COLOR_RED
		"%sxxxxxxxxxxxxxxxxxxxx\n"
		"%sexpected: %s\n"
		"%sreceived: %s\n"
		"%sxxxxxxxxxxxxxxxxxxxx\n\n"
		COLOR_DEFAULT,
		_P, _P,
		e,
		_P,
		r,
		_P);
	strcat(currentTest->errorMessage,
		   errorMessage);
}

void assertCharEq(char expected, char received) {
	if (isTestPassedConditonTrue(expected == received)) { return; }

	char ex[50], re[50];
	sprintf(ex, "'%c'", expected);
	sprintf(re, "'%c'", received);

	isTestFailed(ex, re);
}

void assertIntEq(int expected, int received) {
	if (isTestPassedConditonTrue(expected == received)) { return; }

	char ex[50], re[50];
	sprintf(ex, "%d", expected);
	sprintf(re, "%d", received);

	isTestFailed(ex, re);
}

void assertStrEq(char *expected, char *received) {
	bool strAreEqual = true;

	for (int i = 0; !(expected[i] == '\0' && received[i] == '\0'); i++) {
		if (expected[i] != received[i]) {
			strAreEqual = false;
			break;
		}
	}

	if (isTestPassedConditonTrue(strAreEqual)) { return; }

	char ex[50], re[50];
	sprintf(ex, "\"%s\"", expected);
	sprintf(re, "\"%s\"", received);

	isTestFailed(ex, re);
}

void assertPtrIsNull(void *ptr) {
	if (isTestPassedConditonTrue(ptr == NULL)) { return; }

	char ex[50], re[50];
	sprintf(ex, "NULL");
	sprintf(re, "%p", &ptr);

	isTestFailed(ex, re);
}
