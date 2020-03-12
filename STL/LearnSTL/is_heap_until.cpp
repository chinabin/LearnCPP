#include "is_heap_until.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>

using namespace std;

namespace IS_HEAP_UNTIL{
	void test_all()
	{
		cout << "----------is_heap_until_test----------" << endl;

		test_is_heap_until();

		cout << endl;
	}
	
	void test_is_heap_until()
	{
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> dis(1, 100);
		vector<int> A;
		generate_n(back_inserter(A), 10, bind(dis, mt_engine));
		cout << "A: ";
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		auto ret = is_heap_until(A.begin(), A.end());
		cout << distance(A.begin(), ret) << endl;
	}
}