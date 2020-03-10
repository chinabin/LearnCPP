#include "unique_copy.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>

using namespace std;

namespace UNIQUE_COPY{
	void test_all()
	{
		cout << "----------unique_copy_test----------" << endl;

		test_unique_copy1();
		test_unique_copy2();

		cout << endl;
	}
	
	void test_unique_copy1()
	{
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> distribution(1, 2);
		vector<int> v;
		generate_n(back_inserter(v), 10, bind(distribution, mt_engine));
		for_each(v.begin(), v.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		vector<int> x(v.size());
		auto ret = unique_copy(v.begin(), v.end(), x.begin());
		cout << distance(x.begin(), ret) << endl;

		for_each(x.begin(), x.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
	}

	void test_unique_copy2()
	{
		cout << endl;
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> distribution(1, 2);
		vector<int> v;
		generate_n(back_inserter(v), 10, bind(distribution, mt_engine));
		for_each(v.begin(), v.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		vector<int> x;
		auto ret = unique_copy(v.begin(), v.end(), back_inserter(x), [](int a, int b){
			if (a == b)
			{
				return true;
			}
			return false;
		});

		for_each(x.begin(), x.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
	}
}