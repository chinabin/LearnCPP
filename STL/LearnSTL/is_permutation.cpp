#include "is_permutation.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

namespace IS_PERMUTATION{
	void test_all()
	{
		cout << "----------is_permutation_test----------" << endl;

		test_is_permutation();

		cout << endl;
	}
	
	void test_is_permutation()
	{
		vector<int> v1{ 1, 2, 3, 4, 5 };
		vector<int> v2{ 3, 5, 4, 1, 2 };
		cout << "3,5,4,1,2 is a permutation of 1,2,3,4,5? "
			<< is_permutation(v1.begin(), v1.end(), v2.begin()) << '\n';

		vector<int> v3{ 3, 5, 4, 1, 1 };
		cout << "3,5,4,1,1 is a permutation of 1,2,3,4,5? "
			<< is_permutation(v1.begin(), v1.end(), v3.begin()) << '\n';
	}
}