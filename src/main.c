#include"unicki.h"

int getSum(int x, int y) {
	return x + y;
}

_testSection_
modus(QUIET);
suite("calculation") {
	suite("getSum") {
		test("other") {
			assertPtrIsNull(NULL);
		}
		test("other") {
			assertPtrIsNull(NULL);
		}
		test("other") {
			assertPtrIsNull(NULL);
		}
		test("other") {
			assertPtrIsNull(NULL);
		}
		test("return sum of x, y") {
			int result = getSum(10, 15);
			assertPtrIsNull(&result);
		}
		test("return sum of x, y") {
			int result = getSum(10, 15);
			assertPtrIsNull(&result);
			
		}
		test("other") {
			assertPtrIsNull(NULL);
		}
		test("other") {
			assertPtrIsNull(NULL);
		}
		test("float") {
			assertFloatEq(10.12, 12.13);
		}
		test("other") {
			assertPtrIsNull(NULL);
		}
	}_end;
	suite("getSum") {
		test("other") {
			assertPtrIsNull(NULL);
		}
		test("return sum of x, y") {
			int result = getSum(10, 15);
			assertPtrIsNull(&result);
			
		}
		test("return sum of x, y") {
			int result = getSum(10, 15);
			assertPtrIsNull(&result);
			
		}
		test("other") {
			assertPtrIsNull(NULL);
		}
		test("float") {
			assertFloatEq(10.12, 12.13);
		}
	}_end;
}_end;

_endSection_
