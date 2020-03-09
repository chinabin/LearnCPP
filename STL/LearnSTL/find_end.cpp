#include "find_end.h"
#include <vector>
#include <iostream>

using namespace std;

namespace FIND_END{
	void test_all()
	{
		cout << "----------find_end_test----------" << endl;

		test_find_end();

		cout << endl;
	}

	void test_find_end()
	{
		vector<int> A1{ 1, 2, 3, 4, 1, 2, 3, 1, 2 };
		vector<int> B1{ 1, 2, 3 };
		auto ret1 = find_end(A1.begin(), A1.end(), B1.begin(), B1.end());
		if (ret1 != A1.end())
		{
			cout << distance(A1.begin(), ret1) << endl;
		}
		else
		{
			cout << "没找到" << endl;
		}

		vector<int> A2{ 1, 2, 3, 4, 1, 2, 3, 1, 2 };
		vector<int> B2{ 1, 2, 3 };
		auto ret2 = find_end(A2.begin(), A2.end(), B2.begin(), B2.end(), [](int a, int b){
			if (a - b == 1)
			{
				return true;
			}
			return false;
		});
		if (ret2 != A2.end())
		{
			cout << distance(A2.begin(), ret2) << endl;
		}
		else
		{
			cout << "没找到" << endl;
		}
	}
}