#include "min_element.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>

using namespace std;

namespace MIN_ELEMENT{
	void test_all()
	{
		cout << "----------min_element_test----------" << endl;

		test_min_element();

		cout << endl;
	}
	
	void test_min_element()
	{
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> dis(1, 100);
		vector<int> A;
		generate_n(back_inserter(A), 5, bind(dis, mt_engine));
		cout << "A: ";
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		auto ret = min_element(A.begin(), A.end());
		cout << *ret << endl;
	}
}