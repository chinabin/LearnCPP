#include "rotate.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

namespace ROTATE{
	void test_all()
	{
		cout << "----------rotate_test----------" << endl;

		test_rotate();

		cout << endl;
	}
	
	void test_rotate()
	{
		string A{ "this is a test" };
		rotate(A.begin(), A.begin() + 2, A.end());
		cout << A << endl;

		string B{ "this is a test" };
		rotate(B.rbegin(), B.rbegin() + 2, B.rend());
		cout << B << endl;
	}
}