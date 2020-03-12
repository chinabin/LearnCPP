#include "includes.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

namespace INCLUDES{
	void test_all()
	{
		cout << "----------includes_test----------" << endl;

		test_includes();

		cout << endl;
	}
	
	void test_includes()
	{
		vector<int> A{ 1, 2, 3, 4, 5, 6, 7, 8 };
		for_each(A.begin(), A.end(), [](int i)
		{
			cout << i << " ";
		});
		cout << endl;

		vector<int> B{ 1, 4, 6, 7 };
		for_each(B.begin(), B.end(), [](int i)
		{
			cout << i << " ";
		});
		cout << endl;

		cout << includes(A.begin(), A.end(), B.begin(), B.end()) << endl;
	}
}