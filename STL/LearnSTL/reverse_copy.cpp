#include "reverse_copy.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

namespace REVERSE_COPY{
	void test_all()
	{
		cout << "----------reverse_copy_test----------" << endl;

		test_reverse_copy();

		cout << endl;
	}
	
	void test_reverse_copy()
	{
		string A{ "this is a test" };
		string B(A.size(), ' ');
		reverse_copy(A.begin(), A.end(), B.begin());
		cout << B << endl;
	}
}