#include "adjacent_find.h"
#include <vector>
#include <iostream>

using namespace std;

namespace ADJACENT_FIND{
	void test_all()
	{
		cout << "----------adjacent_find_test----------" << endl;

		test_adjacent_find();

		cout << endl;
	}

	void test_adjacent_find()
	{
		vector<int> A1{ 1, 2, 3, 4, 4, 3, 2, 1 };
		auto ret1 = adjacent_find(A1.begin(), A1.end());
		if (ret1 != A1.end())
		{
			cout << distance(A1.begin(), ret1) << " " << *ret1 << endl;
		}
		else
		{
			cout << "没找到" << endl;
		}

		vector<int> A2{ 1, 2, 3, 4, 5, 6, 5 };
		// 也可以直接用 adjacent_find(A2.begin(), A2.end(), std::greater<int>())
		auto ret2 = adjacent_find(A2.begin(), A2.end(), [](int a, int b){
			if (a > b)
			{
				return true;
			}
			return false;
		});
		if (ret2 != A2.end())
		{
			cout << distance(A2.begin(), ret2) << " " << *ret2 << endl;
		}
		else
		{
			cout << "没找到" << endl;
		}
	}
}