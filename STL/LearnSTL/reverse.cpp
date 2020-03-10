#include "reverse.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

namespace REVERSE{
	void test_all()
	{
		cout << "----------reverse_test----------" << endl;

		test_reverse();

		cout << endl;
	}
	
	void test_reverse()
	{
		string S{ "this is a test" };
		cout << S << endl;
		reverse(S.begin(), S.end());
		cout << S << endl;
	}
}