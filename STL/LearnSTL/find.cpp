#include "find.h"
#include <vector>
#include <iostream>

using namespace std;

namespace FIND{
	void test_all()
	{
		cout << "----------find_test----------" << endl;

		test_find();
		test_find_if();
		test_find_if_not();

		cout << endl;
	}

	void test_find()
	{
		vector<int> A{ 1, 2, 3, 4, 5, 6 };
		auto ret = find(A.cbegin(), A.cend(), 4);
		if (ret != A.cend())
		{
			cout << "找到 " << *ret << endl;
		}
		else
		{
			cout << "没有找到 " << endl;
		}
	}

	void test_find_if()
	{
		vector<int> A{ 1, 2, 3, 4, 5, 6 };
		auto ret = find_if(A.cbegin(), A.cend(), [](int a){
			if (a > 4)
			{
				return true;
			}
			return false;
		});

		if (ret != A.cend())
		{
			cout << "找到 " << *ret << endl;
		}
		else
		{
			cout << "没有找到 " << endl;
		}
	}

	void test_find_if_not()
	{
		vector<int> A{ 1, 2, 3, 4, 5, 6 };
		auto ret = find_if_not(A.cbegin(), A.cend(), [](int a){
			if (a < 4)
			{
				return true;
			}
			return false;
		});

		if (ret != A.cend())
		{
			cout << "找到 " << *ret << endl;
		}
		else
		{
			cout << "没有找到 " << endl;
		}
	}
}