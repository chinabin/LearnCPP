#include "replace_copy.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

namespace REPLACE_COPY{
	void test_all()
	{
		cout << "----------replace_copy_test----------" << endl;

		test_replace_copy();

		cout << endl;
	}
	
	void test_replace_copy()
	{
		string S{ "this is a test." };
		string A(S.size(), ' ');
		auto ret = replace_copy(S.begin(), S.end(), A.begin(), ' ', '_');
		cout << distance(A.begin(), ret) << "=" << distance(A.begin(), A.end()) << endl;
		cout << A << endl;

		string B(S.size(), ' ');
		auto ret1 = replace_copy_if(S.begin(), S.end(), B.begin(), [](char c){
			if (c == ' ')
			{
				return true;
			}
			return false;
		}, '_');
		cout << distance(B.begin(), ret1) << "=" << distance(B.begin(), B.end()) << endl;
		cout << B << endl;
	}
}