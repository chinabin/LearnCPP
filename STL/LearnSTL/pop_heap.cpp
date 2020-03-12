#include "pop_heap.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <functional>

using namespace std;

namespace POP_HEAP{
	void test_all()
	{
		cout << "----------pop_heap_test----------" << endl;

		test_pop_heap();

		cout << endl;
	}
	
	void test_pop_heap()
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

		pop_heap(A.begin(), A.end());

		cout << "×î´óÖµ: " << A.back() << endl;
		A.pop_back();

		cout << "A: ";
		for_each(A.begin(), A.end(), [](int a){
			cout << a << " ";
		});
		cout << endl;
	}
}