#include "rotate_copy.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

namespace ROTATE_COPY{
	void test_all()
	{
		cout << "----------rotate_copy_test----------" << endl;

		test_rotate_copy();

		cout << endl;
	}
	
	void test_rotate_copy()
	{
		string A{ "this is a test" };
		string B(A.size(), ' ');
		rotate_copy(A.begin(), A.begin() + 2, A.end(), B.begin());
		cout << A << endl;
		cout << B << endl;
	}
}