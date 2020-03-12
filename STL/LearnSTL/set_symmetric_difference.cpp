#include "set_symmetric_difference.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>

using namespace std;

namespace SET_SYMMETRIC_DIFFERENCE{
	void test_all()
	{
		cout << "----------set_symmetric_difference_test----------" << endl;

		test_set_symmetric_difference();

		cout << endl;
	}
	
	void test_set_symmetric_difference()
	{
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> dis1(1, 10), dis2(1, 15);

		vector<int> A;
		generate_n(back_inserter(A), 5, bind(dis1, mt_engine));
		sort(A.begin(), A.end());
		for_each(A.begin(), A.end(), [](int i)
		{
			cout << i << " ";
		});
		cout << endl;

		vector<int> B;
		generate_n(back_inserter(B), 10, bind(dis2, mt_engine));
		sort(B.begin(), B.end());
		for_each(B.begin(), B.end(), [](int i)
		{
			cout << i << " ";
		});
		cout << endl;

		vector<int> C;
		auto ret = set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(), back_inserter(C));
		for_each(C.begin(), C.end(), [](int i)
		{
			cout << i << " ";
		});
		cout << endl;
	}
}