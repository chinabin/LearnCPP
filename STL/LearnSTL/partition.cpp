#include "partition.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>

using namespace std;

namespace PARTITION{
	void test_all()
	{
		cout << "----------partition_test----------" << endl;

		test_partition();

		cout << endl;
	}
	
	void test_partition()
	{
		vector<int> A;
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> distribution(1, 10);
		generate_n(back_inserter(A), 10, bind(distribution, mt_engine));
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		auto ret = partition(A.begin(), A.end(), [](int a){
			if (a % 2 == 0)
			{
				return true;
			}
			return false;
		});
		cout << distance(A.begin(), ret) << endl;

		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
	}
}