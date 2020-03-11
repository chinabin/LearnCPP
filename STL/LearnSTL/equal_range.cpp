#include "equal_range.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>

using namespace std;

namespace EQUAL_RANGE{
	void test_all()
	{
		cout << "----------equal_range_test----------" << endl;

		test_equal_range1();
		test_equal_range2();

		cout << endl;
	}
	
	void test_equal_range1()
	{
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> dis(1, 3);
		vector<int> A;
		generate_n(back_inserter(A), 15, bind(dis, mt_engine));

		cout << "A: ";
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		sort(A.begin(), A.end());

		cout << "A after sort: ";
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		auto ret = equal_range(A.begin(), A.end(), 3);
		cout << distance(ret.first, ret.second)
			<< endl;
	}

	void test_equal_range2()
	{
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> dis(1, 3);
		vector<int> A;
		generate_n(back_inserter(A), 15, bind(dis, mt_engine));

		cout << "A: ";
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		sort(A.begin(), A.end());

		cout << "A after sort: ";
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		auto ret = equal_range(A.begin(), A.end(), 3, [](int a, int b){
			return a < b;
		});
		cout << distance(ret.first, ret.second)
			<< endl;
	}
}