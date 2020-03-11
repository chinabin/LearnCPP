#include "partial_sort_copy.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>

using namespace std;

namespace PARTIAL_SORT_COPY{
	void test_all()
	{
		cout << "----------partial_sort_copy_test----------" << endl;

		test_partial_sort_copy();

		cout << endl;
	}
	
	void test_partial_sort_copy()
	{
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> dis(1, 10);
		vector<int> A, B(10);
		generate_n(back_inserter(A), 15, bind(dis, mt_engine));

		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		partial_sort_copy(A.begin(), A.end(), B.begin(), B.end());

		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
		for_each(B.begin(), B.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
	}
}