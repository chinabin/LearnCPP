#include "is_sorted.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>

using namespace std;

namespace IS_SORTED{
	void test_all()
	{
		cout << "----------is_sorted_test----------" << endl;

		test_is_sorted1();
		test_is_sorted2();

		cout << endl;
	}
	
	void test_is_sorted1()
	{
		vector<int> A;
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> distribution(1, 10);
		generate_n(back_inserter(A), 15, bind(distribution, mt_engine));
		cout << is_sorted(A.begin(), A.end()) << endl;

		sort(A.begin(), A.end());

		cout << is_sorted(A.begin(), A.end()) << endl;
	}

	void test_is_sorted2()
	{
		vector<int> A;
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> distribution(1, 10);
		generate_n(back_inserter(A), 15, bind(distribution, mt_engine));
		cout << is_sorted(A.begin(), A.end(), [](int a, int b){
			if (a < b)
			{
				return true;
			}
			return false;
		}) << endl;

		sort(A.begin(), A.end());

		cout << is_sorted(A.begin(), A.end(), [](int a, int b){
			if (a < b)
			{
				return true;
			}
			return false;
		}) << endl;
	}
}