#include "sort_heap.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>

using namespace std;

namespace SORT_HEAP{
	void test_all()
	{
		cout << "----------sort_heap_test----------" << endl;

		test_sort_heap();

		cout << endl;
	}
	
	void test_sort_heap()
	{
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> dis(1, 10);
		vector<int> A;
		generate_n(back_inserter(A), 15, bind(dis, mt_engine));
		make_heap(A.begin(), A.end());

		cout << "A: ";
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		sort_heap(A.begin(), A.end());

		cout << "A: ";
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
	}
}