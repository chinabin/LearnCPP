#include "lower_bound.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>

using namespace std;

namespace LOWER_BOUND{
	void test_all()
	{
		cout << "----------lower_bound_test----------" << endl;

		test_lower_bound1();
		test_lower_bound2();

		cout << endl;
	}
	
	void test_lower_bound1()
	{
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> dis(1, 4);
		vector<int> A;
		generate_n(back_inserter(A), 10, bind(dis, mt_engine));

		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		sort(A.begin(), A.end());

		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		auto ret = lower_bound(A.begin(), A.end(), 3);
		cout << distance(A.begin(), ret) << endl;
	}

	void test_lower_bound2()
	{
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> dis(1, 4);
		vector<int> A;
		generate_n(back_inserter(A), 10, bind(dis, mt_engine));

		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		sort(A.begin(), A.end());

		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		auto ret = lower_bound(A.begin(), A.end(), 3, [](int a, int b){
			return a < b;
		});
		cout << distance(A.begin(), ret) << endl;
	}
}