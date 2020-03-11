#include "is_partitioned.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

namespace IS_PARTITIONED{
	void test_all()
	{
		cout << "----------is_partitioned_test----------" << endl;

		test_is_partitioned();

		cout << endl;
	}
	
	void test_is_partitioned()
	{
		vector<int> A{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
		std::cout.setf(std::ios_base::boolalpha);
		cout << is_partitioned(A.begin(), A.end(), [](int a){
			if (a <= 4)
			{
				return true;
			}
			return false;
		});
	}
}