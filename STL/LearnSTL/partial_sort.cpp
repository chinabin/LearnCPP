#include "partial_sort.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>

using namespace std;

namespace PARTIAL_SORT{
	void test_all()
	{
		cout << "----------partial_sort_test----------" << endl;

		test_partial_sort();

		cout << endl;
	}
	
	void test_partial_sort()
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
		partial_sort(A.begin(), A.begin() + 4, A.end());
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
	}
}