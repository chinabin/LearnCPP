#include "partition_copy.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>

using namespace std;

namespace PARTITION_COPY{
	void test_all()
	{
		cout << "----------partition_copy_test----------" << endl;

		test_partition_copy();

		cout << endl;
	}
	
	void test_partition_copy()
	{
		vector<int> A;
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> distribution(1, 2);
		generate_n(back_inserter(A), 15, bind(distribution, mt_engine));
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		vector<int> BTrue, BFalse;
		auto ret = partition_copy(A.begin(), A.end(), back_inserter(BTrue), back_inserter(BFalse), [](int a){
			return (a % 2 == 0 ? true : false);
		});

		for_each(BTrue.begin(), BTrue.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
		for_each(BFalse.begin(), BFalse.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
	}
}