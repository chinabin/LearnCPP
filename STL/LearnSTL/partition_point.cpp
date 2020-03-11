#include "partition_point.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>
#include <iterator>

using namespace std;

namespace PARTITION_POINT{
	void test_all()
	{
		cout << "----------partition_point_test----------" << endl;

		test_partition_point();

		cout << endl;
	}
	
	void test_partition_point()
	{
		vector<int> A;
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> distribution(1, 10);
		generate_n(back_inserter(A), 10, bind(distribution, mt_engine));

		partition(A.begin(), A.end(), [](int a){
			if (a % 2 == 0)
			{
				return true;
			}
			return false;
		});
		auto ret = partition_point(A.begin(), A.end(), [](int a){
			if (a % 2 == 0)
			{
				return true;
			}
			return false;
		});

		copy(A.begin(), ret, std::ostream_iterator<int>(std::cout, " "));
		cout << endl;
		copy(ret, A.end(), std::ostream_iterator<int>(std::cout, " "));
		cout << endl;
	}
}