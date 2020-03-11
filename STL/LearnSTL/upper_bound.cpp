#include "upper_bound.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>

using namespace std;

namespace UPPER_BOUND{
	void test_all()
	{
		cout << "----------upper_bound_test----------" << endl;

		test_upper_bound1();
		test_upper_bound2();

		cout << endl;
	}
	
	void test_upper_bound1()
	{
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> dis(1, 10);
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

		auto ret = upper_bound(A.begin(), A.end(), 4);
		cout << distance(A.begin(), ret) << endl;
	}

	void test_upper_bound2()
	{
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> dis(1, 10);
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

		auto ret = upper_bound(A.begin(), A.end(), 4);
		cout << distance(A.begin(), ret) << endl;
	}
}