#include "swap_ranges.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

namespace SWAP_RANGES{
	void test_all()
	{
		cout << "----------swap_ranges_test----------" << endl;

		test_swap_ranges();

		cout << endl;
	}
	
	void test_swap_ranges()
	{
		string A{ "this is a test." };
		string B{ "hehe haha" };
		swap_ranges(A.begin(), A.begin() + B.size(), B.begin());
		cout << A << endl << B << endl;
	}
}