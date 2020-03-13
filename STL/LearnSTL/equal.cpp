#include "equal.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>

using namespace std;

namespace EQUAL{
	void test_all()
	{
		cout << "----------equal_test----------" << endl;

		test_equal();

		cout << endl;
	}
	
	void test_equal()
	{
		vector<int> A{ 1, 2, 3, 4 };
		vector<int> B{ 1, 2, 3, 4, 5 };
		vector<int> C{ 1, 2, 3, 4 };
		vector<int> D{ 1, 2, 3, 4 };
		random_device rd;
		mt19937 mt_engine(rd());
		shuffle(D.begin(), D.end(), mt_engine);

		cout << equal(A.begin(), A.end(), B.begin())
			<< " " << equal(A.begin(), A.end(), C.begin())
			<< " " << equal(A.begin(), A.end(), D.begin()) << endl;;
	}
}