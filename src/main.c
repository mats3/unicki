#include"unicki/unicki.h"
#include<stddef.h>

int getSum(int x, int y) {
	return x + y;
}

_testSection_

suite("calculation") {
	suite("getSum") {
		test("return sum of x, y") {
			int result = getSum(10, 15);
			assertIntEq(25, result);
			assertStrEq("Hllo, World", "Hello, World");
			assertStrEq("Hello, World", "Hello, World");
			assertPtrIsNull(&result);
		}
	}_end;
	test("ich liebe debi nicht danke") {
	}
}_end;

suite("fun") {
	test("another test");
	suite("hallo") {
		test("another test") {
			assertIntEq(10, 10);
		}
	}_end;
}_end;

suite("beschissen") {
	test("should pass") {
		assertIntEq(15, 15);
	}
}_end;

_endSection_
