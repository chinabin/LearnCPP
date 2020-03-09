#include "find_first_of.h"
#include <vector>
#include <iostream>

using namespace std;

namespace FIND_FIRST_OF{
	void test_all()
	{
		cout << "----------find_first_of_test----------" << endl;

		test_find_first_of();

		cout << endl;
	}

	void test_find_first_of()
	{
		vector<int> A1{ 1, 2, 3, 4, 3, 2, 1 };
		vector<int> B1{ 3, 7, 8 };
		auto ret1 = find_first_of(A1.begin(), A1.end(), B1.begin(), B1.end());
		if (ret1 != A1.end())
		{
			cout << distance(A1.begin(), ret1) << endl;
		}
		else
		{
			cout << "没找到" << endl;
		}

		vector<int> A2{ 1, 2, 3, 4, 3, 2, 1 };
		vector<int> B2{ 3, 7, 8 };
		auto ret2 = find_first_of(A2.begin(), A2.end(), B2.begin(), B2.end(), [](int a, int b){
			if (a == 4 && b == 8)
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