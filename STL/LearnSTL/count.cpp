#include "count.h"
#include <vector>
#include <iostream>

using namespace std;

namespace COUNT{
	void test_all()
	{
		cout << "----------count_test----------" << endl;

		test_count();
		test_count_if();

		cout << endl;
	}

	void test_count()
	{
		vector<int> A{ 1, 2, 3, 3, 5, 2, 3, 3, 3 };
		cout << "3 �ĸ���=" << count(A.begin(), A.end(), 3) << endl;
	}

	void test_count_if()
	{
		vector<int> A{ 1, 2, 3, 4, 5, 6, 7 };
		cout << "���� 3 �ĸ���=" << count_if(A.begin(), A.end(), [](int a){
			return a > 3;
		}) << endl;
	}
}