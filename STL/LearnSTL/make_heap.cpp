#include "make_heap.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>

using namespace std;

namespace MAKE_HEAP{
	void test_all()
	{
		cout << "----------make_heap_test----------" << endl;

		test_make_heap();

		cout << endl;
	}
	
	void test_make_heap()
	{
		random_device rd;
		mt19937 mt_engine(rd());
		uniform_int_distribution<int> dis(1, 10);
		vector<int> A;
		generate_n(back_inserter(A), 15, bind(dis, mt_engine));
		cout << "A: ";
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;

		cout << is_heap(A.begin(), A.end()) << endl;

		make_heap(A.begin(), A.end());

		cout << is_heap(A.begin(), A.end()) << endl;

		cout << "A: ";
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
	}
}