#include"unicki.h"
#include<stddef.h>

int getSum(int x, int y) {
	return x + y;
}

_testSection_

suite("calculation") {
	suite("getSum") {
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
