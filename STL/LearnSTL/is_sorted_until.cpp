#include "is_sorted_until.h"
#include <vector>
#include <string>
#include <iostream>
#include <random>

using namespace std;

namespace IS_SORTED_UNTIL{
	void test_all()
	{
		cout << "----------is_sorted_until_test----------" << endl;

		test_is_sorted_until();

		cout << endl;
	}
	
	void test_is_sorted_until()
	{
		random_device rd;
		mt19937 mt_engine(rd());
		int N = 7;
		int A[] = { 1, 3, 1, 4, 5, 2, 0 };

		int sorted_size = 0, min_sorted_size = 5;
		do 
		{
			shuffle(A, A + N, mt_engine);
			auto ret = is_sorted_until(A, A + N);
			sorted_size = distance(A, ret);
			for_each(A, A + N, [](int a){
				cout << a << " ";
			});
			cout << ": " << sorted_size << " " << *ret << endl;
		} while (sorted_size < min_sorted_size);
	}
}